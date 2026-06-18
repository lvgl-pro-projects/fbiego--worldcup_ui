/**
 * @file wd_flag_xml_parser.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "wd_flag_gen.h"

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

#if LV_USE_XML

#include "lv_xml_private/lv_xml_private.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void * wd_flag_xml_create(lv_xml_parser_state_t * state, const char ** attrs)
{
    LV_UNUSED(attrs);
    void * item = wd_flag_create(lv_xml_state_get_parent(state));

    if(item == NULL) {
        LV_LOG_ERROR("Failed to create wd_flag");
        return NULL;
    }

    return item;
}

void wd_flag_xml_apply(lv_xml_parser_state_t * state, const char ** attrs)
{
    void * item = lv_xml_state_get_item(state);

    lv_xml_obj_apply(state, attrs);

    for(int i = 0; attrs[i]; i += 2) {
        const char * name = attrs[i];
        const char * value = attrs[i + 1];

        if(lv_streq("bind_code", name)) {
            lv_subject_t * subject = lv_xml_get_subject(&state->scope, value);
            if(subject == NULL) {
                LV_LOG_WARN("Subject \"%s\" doesn't exist in wd_flag bind_code", value);
                continue;
            }
            wd_flag_bind_code(item, subject);
        }
    }
}

void wd_flag_register(void)
{
    lv_xml_register_widget("wd_flag", wd_flag_xml_create, wd_flag_xml_apply);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

#endif /* LV_USE_XML */