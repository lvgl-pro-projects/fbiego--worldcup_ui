/**
 * @file wd_flag_gen.h
 *
 */

#ifndef WD_FLAG_GEN_H
#define WD_FLAG_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

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

#include "../../worldcup_ui_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a wd_flag object
 * @param parent pointer to an object, it will be the parent of the new wd_flag
 * @return pointer to the created wd_flag
 */
lv_obj_t * wd_flag_create(lv_obj_t * parent);
/**
 * The 3 letter country code
 * @param obj   pointer to a wd_flag
 * @param bind_code  The 3 letter country code
 */
void wd_flag_bind_code(lv_obj_t * wd_flag, lv_subject_t * bind_code);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*WD_FLAG_GEN_H*/