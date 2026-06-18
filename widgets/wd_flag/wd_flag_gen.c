/**
 * @file wd_flag_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "wd_flag_private_gen.h"
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif
#include "../../worldcup_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

void wd_flag_constructor_hook(lv_obj_t * obj);
void wd_flag_destructor_hook(lv_obj_t * obj);
void wd_flag_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void wd_flag_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void wd_flag_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void wd_flag_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t wd_flag_class = {
    .base_class = &lv_image_class,
    .constructor_cb = wd_flag_constructor,
    .destructor_cb = wd_flag_destructor,
    .event_cb = wd_flag_event,
    .instance_size = sizeof(wd_flag_t),
    .editable = 1,
    .name = "wd_flag"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * wd_flag_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&wd_flag_class, parent);
    lv_obj_class_init_obj(obj);

    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void wd_flag_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    wd_flag_t * widget = (wd_flag_t *)obj;
    static lv_style_t style_base;
    static bool style_inited = false;

    if (!style_inited) {
        #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
        if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
            lv_style_init(&style_base);
            lv_style_set_width(&style_base, LV_SIZE_CONTENT);
            lv_style_set_height(&style_base, LV_SIZE_CONTENT);

        }
        #endif
        style_inited = true;
    }

    lv_obj_t * the_root = NULL;
    #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
    if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
        lv_obj_add_style(obj, &style_base, 0);

        the_root = obj;
    }
    #endif
    wd_flag_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void wd_flag_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    wd_flag_destructor_hook(obj);
}

static void wd_flag_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&wd_flag_class, e);
    if(res != LV_RESULT_OK) return;

    wd_flag_event_hook(e);
}

