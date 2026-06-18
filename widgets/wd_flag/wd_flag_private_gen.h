/**
 * @file wd_flag_private_gen.h
 *
 */

#ifndef WD_FLAG_PRIVATE_H
#define WD_FLAG_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl_private.h"
#endif
#include "wd_flag.h"

/*********************
 *      DEFINES
 *********************/

#ifndef WD_FLAG_USER_DATA
#define WD_FLAG_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_image_t obj;  /* Base widget to extend */
    lv_subject_t * bind_code;
    WD_FLAG_USER_DATA
} wd_flag_t;

extern const lv_obj_class_t wd_flag_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void wd_flag_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*WD_FLAG_PRIVATE_H*/