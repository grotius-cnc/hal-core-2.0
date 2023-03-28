#include "rtapi.h"
#include "rtapi_ctype.h"
#include "rtapi_app.h"
#include "rtapi_string.h"
#include "rtapi_errno.h"
#include "rtapi_math64.h"
#include <rtapi_io.h>
#include "hal.h"
#include <motion.h>

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
bit_data_t *enable, *fwd, *bck;

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

bool init_fwd=0;
bool init_bck=0;
double t=0.001;
double v=0;
double s=0;
double am=2;
double vm=10;
double vo=0;

int rtapi_app_main(void) {

    int r = 0;
    comp_idx = hal_init("motion");
    if(comp_idx < 0) return comp_idx;
    r = hal_export_funct("motion.update", the_function, &skynet,0,0,comp_idx);

    r+=setup_pins();

    if(r) {
        hal_exit(comp_idx);
    } else {
        hal_ready(comp_idx);
    }
    return 0;
}

void rtapi_app_exit(void){
    hal_exit(comp_idx);
}

static void acc_fwd_period(){

     vo=v;

    if(v<vm){
       s+=vo*t + 0.5*am*(t*t);
       v=vo+am*t;
    }
    if(v>vm){ //! Upper limit.
        v=vm;
    }
    //! Linear period at speed.
    if(v==vm){
        s+=v*t;
    }
}

static void acc_bck_period(){

    v=v*-1; //! To positive.
    vo=v;

    if(v<vm){
       s-=vo*t + 0.5*am*(t*t); //! Negative displacement.
       v=vo+am*t;
    }
    if(v>vm){ //! Upper limit.
        v=vm;
    }
    //! Linear period at speed.
    if(v==vm){
        s-=v*t; //! Negative displacement.
    }
    v=v*-1; //! To negative.
}

static void dcc_fwd_period(){

    vo=v;

    if(v>0){
       s+=vo*t + 0.5*am*(t*t);
       v=vo-am*t;
    }
    if(v<0){ //! Lower limit.
        v=0;
        init_fwd=0; //! Reset fwd move.
    }
}

static void dcc_bck_period(){

    v=v*-1; //! To positive.
    vo=v;

    if(v>0){
       s-=vo*t + 0.5*am*(t*t);
       v=vo-am*t;
    }
    if(v<0){ //! Lower limit.
        v=0;
        init_bck=0; //! Reset bck move.
    }
     v=v*-1; //! To negative.
}

//! Perforn's every ms.
static void the_function(){

    if(*fwd->Pin && !init_bck){
        init_fwd=1; //! Lock bck move.
        acc_fwd_period();
    }
    if(!*fwd->Pin && init_fwd){
        dcc_fwd_period();
    }

    if(*bck->Pin && !init_fwd){
        init_bck=1;
        acc_bck_period();
    }
    if(!*bck->Pin && init_bck){
        dcc_bck_period();
    }

    rtapi_print_msg(RTAPI_MSG_ERR, "v: %f \n", v);
    rtapi_print_msg(RTAPI_MSG_ERR, "s: %f \n", s);

    if(*enable->Pin==1){


    }
}

static int setup_pins(){
    int r=0;

    //! Input pins, type bit.
    enable = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("motion.enable",HAL_IN,&(enable->Pin),comp_idx);

    fwd = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("motion.fwd",HAL_IN,&(fwd->Pin),comp_idx);

    bck = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("motion.bck",HAL_IN,&(bck->Pin),comp_idx);

    return r;
}








































