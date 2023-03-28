#include <common.h>
#include <scurve.h>
#include <sc_engine.h>

/* module information */
MODULE_AUTHOR("Skynet_Cyberdyne");
MODULE_DESCRIPTION("scurve");
MODULE_LICENSE("GPL");

static int component_id;
static void the_function();
static int setup_pins();

//! Scurve flow functions.
static int create_curve();
static int interpolate_curve();

//! Start the curve.
param_bit_data_t *run;
//! Create curve variables.
param_float_data_t *a_, *dv_, *vm_, *vo, *ve, *acs, *ace, *ncs, *nct;
//! Interpolated values.
param_float_data_t *vi, *si, *ai, *at_time, *finished;

static struct sc_period p;
static struct sc_vsa vsa;
struct sc_period *pvec;
size_t size;

float cycle_time=0.001;

//! In general : Return 0=ok, return 1=error.

int rtapi_app_main(void) {

    int r = 0;
    component_id = hal_init("scurve");
    if(component_id < 0) return component_id;
    r = hal_export_funct("the_function", the_function, &skynet,0,0,component_id);

    r+=setup_pins();

    if(r) {
        rtapi_print_msg(RTAPI_MSG_ERR,"scurve init error.");
        hal_exit(component_id);
    } else {
        hal_ready(component_id);
    }
    return 0;
}

void rtapi_app_exit(void){
    hal_exit(component_id);
}

//! Perforn's every ms.
static void the_function(){

    T r=0;

    if(run->Pin==1){
        r+=create_curve();      //! Make sure you have set all values to construct a curve.
        at_time->Pin=0;         //! Reset time to zero.
        run->Pin=0;
    }

    if(r){
        rtapi_print_msg(RTAPI_MSG_ERR,"scurve create fails.");
        r=0;
    }

    r+=interpolate_curve();     //! Update scurve each servo cycle.
    //! If curve is finished, finished->Pin=1.

    if(r){
        //! Curve finished ..
    }
}

static int create_curve(){

    I r=0;
    r+=set_a_dv(a_->Pin,dv_->Pin);
    p.id=id_run;    //! Could use a id_pause for example.
    p.vo=vo->Pin;
    p.ve=ve->Pin;
    p.acs=acs->Pin;
    p.ace=ace->Pin;
    p.ncs=ncs->Pin;

    r+=process_curve(p,vm_->Pin,&pvec,&size);

    //! Calculate total curve time, the sum of the periods time.
    nct->Pin=to_ttot_pvec(pvec,size);

    return r;
}

static int interpolate_curve(){

    I ready;
    I r=0;

    r+=interpolate_periods(at_time->Pin,pvec,size,&vsa,&ready);
    vi->Pin=vsa.v;
    si->Pin=vsa.s;
    ai->Pin=vsa.a;
    finished->Pin=ready;

    at_time->Pin+=cycle_time;

    return r;
}

static int setup_pins(){
    int r=0;

    //! Input pins, type bit.
    run = (param_bit_data_t*)hal_malloc(sizeof(param_bit_data_t));
    r+=hal_param_bit_new("scurve.run",HAL_RW,&(run->Pin),component_id);
    
    a_ = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.a",HAL_RW,&(a_->Pin),component_id);

    dv_ = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.dv",HAL_RW,&(dv_->Pin),component_id);

    vm_ = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.vm",HAL_RW,&(vm_->Pin),component_id);

    vo = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.vo",HAL_RW,&(vo->Pin),component_id);

    ve = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.ve",HAL_RW,&(ve->Pin),component_id);

    acs = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.acs",HAL_RW,&(acs->Pin),component_id);

    ace = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.ace",HAL_RW,&(ace->Pin),component_id);

    ncs = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.ncs",HAL_RW,&(ncs->Pin),component_id);

    nct = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.nct",HAL_RW,&(nct->Pin),component_id);

    vi = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.vi",HAL_RW,&(vi->Pin),component_id);

    si = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.si",HAL_RW,&(si->Pin),component_id);

    ai = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.ai",HAL_RW,&(ai->Pin),component_id);

    at_time = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.at_time",HAL_RW,&(at_time->Pin),component_id);

    finished = (param_float_data_t*)hal_malloc(sizeof(param_float_data_t));
    r+=hal_param_float_new("scurve.finished",HAL_RW,&(finished->Pin),component_id);

    return r;
}














//set_a_dv(2,10);

//struct sc_period p={0};
//p.vo=0;
//p.ve=50;
//p.acs=0;
//p.ace=0;

//struct sc_period *pvec={0};
//size_t size=0;

//pvec= t1_t2_t3_pvec(p);

//rtapi_print_msg(RTAPI_MSG_ERR,"i: %f \n",pvec[0].ncs);
//rtapi_print_msg(RTAPI_MSG_ERR,"i: %f \n",pvec[1].ncs);
//rtapi_print_msg(RTAPI_MSG_ERR,"i: %f \n",pvec[2].ncs);

//rtapi_print_msg(RTAPI_MSG_ERR,"running \n");


























