/**
 * @file wd_flag.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "wd_flag_private_gen.h"
#include "../../worldcup_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void code_observer_cb(lv_observer_t *observer, lv_subject_t *subject);

static const void * get_flag(const char * code);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void wd_flag_constructor_hook(lv_obj_t * obj)
{
    wd_flag_t * widget = (wd_flag_t *)obj;
    lv_image_set_src(obj, lvgl_logo);

}

void wd_flag_destructor_hook(lv_obj_t * obj)
{

}

void wd_flag_event_hook(lv_event_t * e)
{

}

void wd_flag_bind_code(lv_obj_t * wd_flag, lv_subject_t * bind_code)
{
    wd_flag_t * widget = (wd_flag_t *)wd_flag;
    widget->bind_code = bind_code;

    lv_subject_add_observer_obj(widget->bind_code, code_observer_cb, wd_flag, widget);

}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void code_observer_cb(lv_observer_t *observer, lv_subject_t *subject)
{
    wd_flag_t * widget = (wd_flag_t *)lv_observer_get_user_data(observer);
    lv_obj_t * obj = (lv_obj_t *) widget;
    const char* code = lv_subject_get_string(subject);

    lv_image_set_src(obj, get_flag(code));

}

static const void * get_flag(const char * code) 
{
    if(lv_streq("CIV", code)) { return CIV; }
    else if(lv_streq("QAT", code)) { return QAT; }
    else if(lv_streq("GHA", code)) { return GHA; }
    else if(lv_streq("NZL", code)) { return NZL; }
    else if(lv_streq("GER", code)) { return GER; }
    else if(lv_streq("EGY", code)) { return EGY; }
    else if(lv_streq("CPV", code)) { return CPV; }
    else if(lv_streq("MEX", code)) { return MEX; }
    else if(lv_streq("SCO", code)) { return SCO; }
    else if(lv_streq("IRQ", code)) { return IRQ; }
    else if(lv_streq("KSA", code)) { return KSA; }
    else if(lv_streq("RSA", code)) { return RSA; }
    else if(lv_streq("CRO", code)) { return CRO; }
    else if(lv_streq("USA", code)) { return USA; }
    else if(lv_streq("MAR", code)) { return MAR; }
    else if(lv_streq("COD", code)) { return COD; }
    else if(lv_streq("CZE", code)) { return CZE; }
    else if(lv_streq("ENG", code)) { return ENG; }
    else if(lv_streq("JPN", code)) { return JPN; }
    else if(lv_streq("CAN", code)) { return CAN; }
    else if(lv_streq("PAR", code)) { return PAR; }
    else if(lv_streq("ECU", code)) { return ECU; }
    else if(lv_streq("TUR", code)) { return TUR; }
    else if(lv_streq("SEN", code)) { return SEN; }
    else if(lv_streq("BRA", code)) { return BRA; }
    else if(lv_streq("NED", code)) { return NED; }
    else if(lv_streq("AUS", code)) { return AUS; }
    else if(lv_streq("BIH", code)) { return BIH; }
    else if(lv_streq("URY", code)) { return URY; }
    else if(lv_streq("ALG", code)) { return ALG; }
    else if(lv_streq("TUN", code)) { return TUN; }
    else if(lv_streq("KOR", code)) { return KOR; }
    else if(lv_streq("PAN", code)) { return PAN; }
    else if(lv_streq("POR", code)) { return POR; }
    else if(lv_streq("COL", code)) { return COL; }
    else if(lv_streq("CUW", code)) { return CUW; }
    else if(lv_streq("BEL", code)) { return BEL; }
    else if(lv_streq("FRA", code)) { return FRA; }
    else if(lv_streq("AUT", code)) { return AUT; }
    else if(lv_streq("SWE", code)) { return SWE; }
    else if(lv_streq("NOR", code)) { return NOR; }
    else if(lv_streq("HAI", code)) { return HAI; }
    else if(lv_streq("UZB", code)) { return UZB; }
    else if(lv_streq("IRN", code)) { return IRN; }
    else if(lv_streq("ESP", code)) { return ESP; }
    else if(lv_streq("ARG", code)) { return ARG; }
    else if(lv_streq("SUI", code)) { return SUI; }
    else if(lv_streq("JOR", code)) { return JOR; }
    else { return lvgl_logo; }
}