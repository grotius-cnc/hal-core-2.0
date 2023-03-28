#include "rtapi.h"
#include "rtapi_ctype.h"
#include "rtapi_app.h"
#include "rtapi_string.h"
#include "rtapi_errno.h"
#include "rtapi_math64.h"
#include <rtapi_io.h>
#include "hal.h"
#include <motion.h>
#include <math.h>

/* module information */
MODULE_AUTHOR("Skynet");
MODULE_DESCRIPTION("Halmodule test");
MODULE_LICENSE("GPL");

static int comp_idx;

typedef struct {
    bool ok;
} skynet_t;
skynet_t *skynet;

typedef struct {
    hal_float_t *Pin;
} float_data_t;

//! Pins
typedef struct {
    hal_bit_t *Pin;
} bit_data_t;
bit_data_t *enable, *fwd, *bck, *pos;

typedef struct {
    hal_s32_t *Pin;
} s32_data_t;

typedef struct {
    hal_u32_t *Pin;
} u32_data_t;

typedef struct {
    hal_port_t *Pin;
} port_data_t;
port_data_t *port;

//! Params
typedef struct {
    hal_float_t Pin;
} param_float_data_t;

typedef struct {
    hal_bit_t Pin;
} param_bit_data_t;

static int comp_idx; /* component ID */

static void the_function();
static int setup_pins();

struct AXIS {
    bool b_fwd, b_bck, b_pos;
    bool init_fwd, init_bck, init_pos;
    float v, s, a;
    float time_step, am, vm, vo;
    //! Used by position conrtol.
    float pos;  //! Target position.
    float ve;   //! Target velocity end.
    float t1,t2,t3,s1,s2,s3;    //! t=periods acc,steady,dcc, s=displacments a period.
    float timer;
} X;


int rtapi_app_main(void) {

    int r = 0;
    comp_idx = hal_init("motion");
    if(comp_idx < 0) return comp_idx;
    r = hal_export_funct("motion_update", the_function, &skynet,0,0,comp_idx);

    r+=setup_pins();

    if(r) {
        hal_exit(comp_idx);
    } else {
        hal_ready(comp_idx);
    }

    X.b_fwd=0;
    X.b_bck=0;
    X.init_bck=0;
    X.init_fwd=0;
    X.am=2;
    X.vo=0;
    X.vm=10;
    X.time_step=0.001;
    //! Used by position control.
    X.ve=0;
    X.pos=1000;

    return 0;
}

void rtapi_app_exit(void){
    hal_exit(comp_idx);
}

static struct AXIS acc_fwd_period(struct AXIS x){

    float init_fwd=x.init_fwd;
    float init_bck=x.init_bck;
    float t=x.time_step;
    float am=x.am;
    float vo=x.vo;
    float vm=x.vm;
    float a=x.a;
    float v=x.v;
    float s=x.s;

    vo=v;

    if(v<vm){
        s+=vo*t + 0.5*am*(t*t);
        v=vo+am*t;
        a=am;
    }
    if(v>vm){ //! Upper limit.
        v=vm;
    }
    //! Linear period at speed.
    if(v==vm){
        s+=v*t;
        a=0;
    }

    x.init_fwd=init_fwd;
    x.init_bck=init_bck;
    x.time_step=t;
    x.am=am;
    x.vo=vo;
    x.vm=vm;
    x.a=a;
    x.v=v;
    x.s=s;

    return x;
}

static struct AXIS acc_bck_period(struct AXIS x){

    float init_fwd=x.init_fwd;
    float init_bck=x.init_bck;
    float t=x.time_step;
    float am=x.am;
    float vo=x.vo;
    float vm=x.vm;
    float a=x.a;
    float v=x.v;
    float s=x.s;

    v=v*-1; //! To positive.
    vo=v;

    if(v<vm){
        s-=vo*t + 0.5*am*(t*t); //! Negative displacement.
        v=vo+am*t;
        a=am;
    }
    if(v>vm){ //! Upper limit.
        v=vm;
    }
    //! Linear period at speed.
    if(v==vm){
        s-=v*t; //! Negative displacement.
        a=0;
    }
    v=v*-1; //! To negative.

    x.init_fwd=init_fwd;
    x.init_bck=init_bck;
    x.time_step=t;
    x.am=am;
    x.vo=vo;
    x.vm=vm;
    x.a=a;
    x.v=v;
    x.s=s;

    return x;
}

static struct AXIS dcc_fwd_period(struct AXIS x){

    float init_fwd=x.init_fwd;
    float init_bck=x.init_bck;
    float t=x.time_step;
    float am=x.am;
    float vo=x.vo;
    float vm=x.vm;
    float ve=x.ve;
    float a=x.a;
    float v=x.v;
    float s=x.s;

    vo=v;

    if(v>ve){
        s+=vo*t + 0.5*am*(t*t);
        v=vo-am*t;
        a=am;
    }
    if(v<ve){ //! Lower limit.
        v=ve;
        a=0;
        init_fwd=0; //! Reset fwd move.
    }

    x.init_fwd=init_fwd;
    x.init_bck=init_bck;
    x.time_step=t;
    x.am=am;
    x.vo=vo;
    x.vm=vm;
    x.ve=ve;
    x.a=a;
    x.v=v;
    x.s=s;

    return x;
}

static struct AXIS dcc_bck_period(struct AXIS x){

    float init_fwd=x.init_fwd;
    float init_bck=x.init_bck;
    float t=x.time_step;
    float am=x.am;
    float vo=x.vo;
    float vm=x.vm;
    float ve=x.ve;
    float a=x.a;
    float v=x.v;
    float s=x.s;

    v=v*-1; //! To positive.
    vo=v;

    if(v>ve){
        s-=vo*t + 0.5*am*(t*t);
        v=vo-am*t;
        a=am;
    }
    if(v<ve){ //! Lower limit.
        v=ve;
        a=0;
        init_bck=0; //! Reset bck move.
    }
    v=v*-1; //! To negative.

    x.init_fwd=init_fwd;
    x.init_bck=init_bck;
    x.time_step=t;
    x.am=am;
    x.vo=vo;
    x.vm=vm;
    x.ve=ve;
    x.a=a;
    x.v=v;
    x.s=s;

    return x;
}

//! Calculate periods for movement.
static struct AXIS get_position_control_periods(struct AXIS x){

    float init_fwd=x.init_fwd;
    float init_bck=x.init_bck;
    float t=x.time_step;
    float am=x.am;
    float vo=x.vo;
    float vm=x.vm;
    float ve=x.ve;
    float a=x.a;
    float v=x.v;
    float s=x.s;        //! Current machine position.
    float pos=x.pos;    //! Target position.

    float t1=9, t2=0, t3=0;
    float s1=0, s2=0, s3=0;

    float dist=pos-s;
    float sh=0.5*dist;  //! Half distance to vm.
    float vh=0;         //! Reached velocity for half distance.

    // rtapi_print_msg(RTAPI_MSG_ERR, "dist: %f \n", dist);

    if(dist>0){ //! Positive move.

        vh=sqrtf((vo*vo) + 2*am*sh);
        // rtapi_print_msg(RTAPI_MSG_ERR, "vh: %f \n", vh);

        if(vh<=vm){ //! Move fits to acc,dcc period t1,t3.
            t1=(-vo+vh)/am;
            s1=0.5*(vo+vh)*t1;
            t3=t1;
            s3=s1;
            /*
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<=vm \n");
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t1: %f \n", t1);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s1: %f \n", s1);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t3: %f \n", t3);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s3: %f \n", s3);*/
        }
        if(vh>vm){ //! Move fits to acc, steady, dcc period t1,t2,t3.
            //! Period t1,t2,t3
            //! v=vo + a*t;
            //! -vo+v=a*t
            t1=(-vo+vm)/am;
            s1=0.5*(vo+vm)*t1;
            t3=(-vm+ve)/am;
            if(t3<0){ //! abs
                t3*=-1;
            }
            s3=s1;
            s2=dist-(s1+s3);
            //! s=v*t
            //! t=s/v
            t2=s2/vm;
            /*
            rtapi_print_msg(RTAPI_MSG_ERR, "vh>vm \n");
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t1: %f \n", t1);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s1: %f \n", s1);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t2: %f \n", t2);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s2: %f \n", s2);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t3: %f \n", t3);
            rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s3: %f \n", s3);*/

        }

    }
    if(dist<0){

    }

    x.init_fwd=init_fwd;
    x.init_bck=init_bck;
    x.time_step=t;
    x.am=am;
    x.vo=vo;
    x.vm=vm;
    x.ve=ve;
    x.a=a;
    x.v=v;
    x.s=s;
    //! Add periods t and displacments s to struct result.
    x.t1=t1;
    x.t2=t2;
    x.t3=t3;
    x.s1=s1;
    x.s2=s2;
    x.s3=s3;

    return x;
}

//! Calculate periods for movement.
static struct AXIS do_position_control(struct AXIS x){
    float init_fwd=x.init_fwd;
    float init_bck=x.init_bck;
    float time_step=x.time_step;
    float t=x.timer;
    float am=x.am;
    float vo=x.vo;
    float vm=x.vm;
    float a=x.a;
    float v=x.v;
    float s=x.s;        //! Current machine position.
    float ve=x.ve;      //! Velocity end.
    float pos=x.pos;    //! Target position.

    float t1=x.t1, t2=x.t2, t3=x.t3;
    float s1=x.s1, s2=x.s2, s3=x.s3;

    rtapi_print_msg(RTAPI_MSG_ERR, "vh>vm \n");
    rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t1: %f \n", t1);
    rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s1: %f \n", s1);
    rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t2: %f \n", t2);
    rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s2: %f \n", s2);
    rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, t3: %f \n", t3);
    rtapi_print_msg(RTAPI_MSG_ERR, "vh<vm, s3: %f \n", s3);

    if(t<t1){
        x=acc_fwd_period(x);
    }
    if(t>t1 && t<t1+t2){
        //! Nothing happens...
    }
    if(t>t1+t2 && t<t1+t2+t3){
        x=dcc_fwd_period(x);
    }


    t+=time_step; //! increase timer by servo cycle time step, usually 0.001 sec.

    x.init_fwd=init_fwd;
    x.init_bck=init_bck;
    x.time_step=time_step;
    x.timer=t;
    x.am=am;
    x.vo=vo;
    x.vm=vm;
    x.ve=ve;
    x.a=a;
    x.v=v;
    x.s=s;

    return x;
}


//! Perforn's every ms.
static void the_function(){

    X.b_fwd=*fwd->Pin;
    X.b_bck=*bck->Pin;
    X.b_pos=*pos->Pin;

    if(X.b_fwd && !X.init_bck){
        X.init_fwd=1; //! Lock bck move.
        X=acc_fwd_period(X);
    }
    if(!X.b_fwd && X.init_fwd){
        X=dcc_fwd_period(X);
    }

    if(X.b_bck && !X.init_fwd){
        X.init_bck=1;
        X=acc_bck_period(X);
    }
    if(!X.b_bck && X.init_bck){
        X=dcc_bck_period(X);
    }

    if(!X.init_fwd && !X.init_bck && X.b_pos && !X.init_pos){
        X=get_position_control_periods(X);
        X.init_pos=1;
    }
    if(!X.init_fwd && !X.init_bck && X.b_pos && X.init_pos){
        X=do_position_control(X);

    }



    //rtapi_print_msg(RTAPI_MSG_ERR, "v: %f \n", X.v);
    //rtapi_print_msg(RTAPI_MSG_ERR, "s: %f \n", X.s);
    //rtapi_print_msg(RTAPI_MSG_ERR, "a: %f \n", X.a);

    if(*enable->Pin==1){


    }
}

static int setup_pins(){
    int r=0;

    //! Input pins, type bit.
    enable = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("motion.enable",HAL_IN,&(enable->Pin),comp_idx);

    fwd = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("motion.Xfwd",HAL_IN,&(fwd->Pin),comp_idx);

    bck = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("motion.Xbck",HAL_IN,&(bck->Pin),comp_idx);

    pos = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("motion.Xpos",HAL_IN,&(pos->Pin),comp_idx);

    //    X.t = *(param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    //    r+=hal_param_float_new("motion.Xt",HAL_RW,&(X.t.Pin),comp_idx);

    //    X.vo = *(param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    //    r+=hal_param_float_new("motion.Xvo",HAL_RW,&(X.vo.Pin),comp_idx);

    //    X.vm = *(param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    //    r+=hal_param_float_new("motion.Xvm",HAL_RW,&(X.vm.Pin),comp_idx);

    //    X.am = *(param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    //    r+=hal_param_float_new("motion.Xam",HAL_RW,&(X.am.Pin),comp_idx);

    //    X.v = (float_data_t*)hal_malloc(sizeof(float_data_t));
    //    r+=hal_pin_float_new("motion.Xv",HAL_OUT,&(X.v->Pin),comp_idx);

    //    X.s = (float_data_t*)hal_malloc(sizeof(float_data_t));
    //    r+=hal_pin_float_new("motion.Xs",HAL_OUT,&(X.s->Pin),comp_idx);

    //    X.a = (float_data_t*)hal_malloc(sizeof(float_data_t));
    //    r+=hal_pin_float_new("motion.Xa",HAL_OUT,&(X.a->Pin),comp_idx);
    return r;
}








































