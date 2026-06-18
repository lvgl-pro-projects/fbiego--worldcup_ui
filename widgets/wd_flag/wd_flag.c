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
    if(lv_streq("CIV", code)) { return flag_CIV; }
    else if(lv_streq("QAT", code)) { return flag_QAT; }
    else if(lv_streq("GHA", code)) { return flag_GHA; }
    else if(lv_streq("NZL", code)) { return flag_NZL; }
    else if(lv_streq("GER", code)) { return flag_GER; }
    else if(lv_streq("EGY", code)) { return flag_EGY; }
    else if(lv_streq("CPV", code)) { return flag_CPV; }
    else if(lv_streq("MEX", code)) { return flag_MEX; }
    else if(lv_streq("SCO", code)) { return flag_SCO; }
    else if(lv_streq("IRQ", code)) { return flag_IRQ; }
    else if(lv_streq("KSA", code)) { return flag_KSA; }
    else if(lv_streq("RSA", code)) { return flag_RSA; }
    else if(lv_streq("CRO", code)) { return flag_CRO; }
    else if(lv_streq("USA", code)) { return flag_USA; }
    else if(lv_streq("MAR", code)) { return flag_MAR; }
    else if(lv_streq("COD", code)) { return flag_COD; }
    else if(lv_streq("CZE", code)) { return flag_CZE; }
    else if(lv_streq("ENG", code)) { return flag_ENG; }
    else if(lv_streq("JPN", code)) { return flag_JPN; }
    else if(lv_streq("CAN", code)) { return flag_CAN; }
    else if(lv_streq("PAR", code)) { return flag_PAR; }
    else if(lv_streq("ECU", code)) { return flag_ECU; }
    else if(lv_streq("TUR", code)) { return flag_TUR; }
    else if(lv_streq("SEN", code)) { return flag_SEN; }
    else if(lv_streq("BRA", code)) { return flag_BRA; }
    else if(lv_streq("NED", code)) { return flag_NED; }
    else if(lv_streq("AUS", code)) { return flag_AUS; }
    else if(lv_streq("BIH", code)) { return flag_BIH; }
    else if(lv_streq("URY", code)) { return flag_URY; }
    else if(lv_streq("ALG", code)) { return flag_ALG; }
    else if(lv_streq("TUN", code)) { return flag_TUN; }
    else if(lv_streq("KOR", code)) { return flag_KOR; }
    else if(lv_streq("PAN", code)) { return flag_PAN; }
    else if(lv_streq("POR", code)) { return flag_POR; }
    else if(lv_streq("COL", code)) { return flag_COL; }
    else if(lv_streq("CUW", code)) { return flag_CUW; }
    else if(lv_streq("BEL", code)) { return flag_BEL; }
    else if(lv_streq("FRA", code)) { return flag_FRA; }
    else if(lv_streq("AUT", code)) { return flag_AUT; }
    else if(lv_streq("SWE", code)) { return flag_SWE; }
    else if(lv_streq("NOR", code)) { return flag_NOR; }
    else if(lv_streq("HAI", code)) { return flag_HAI; }
    else if(lv_streq("UZB", code)) { return flag_UZB; }
    else if(lv_streq("IRN", code)) { return flag_IRN; }
    else if(lv_streq("ESP", code)) { return flag_ESP; }
    else if(lv_streq("ARG", code)) { return flag_ARG; }
    else if(lv_streq("SUI", code)) { return flag_SUI; }
    else if(lv_streq("JOR", code)) { return flag_JOR; }
    else { return lvgl_logo; }
}