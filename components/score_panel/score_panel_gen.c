/**
 * @file score_panel_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "score_panel_gen.h"
#include "../../worldcup_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * score_panel_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;

    static bool style_inited = false;

    if (!style_inited) {
        #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
        if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
            lv_style_init(&style_base);
            lv_style_set_width(&style_base, lv_pct(100));
            lv_style_set_height(&style_base, LV_SIZE_CONTENT);
            lv_style_set_bg_color(&style_base, lv_color_hex(0x6688ee));
            lv_style_set_layout(&style_base, LV_LAYOUT_FLEX);
            lv_style_set_flex_main_place(&style_base, LV_FLEX_ALIGN_SPACE_BETWEEN);
            lv_style_set_flex_track_place(&style_base, LV_FLEX_ALIGN_CENTER);
            lv_style_set_flex_cross_place(&style_base, LV_FLEX_ALIGN_CENTER);
            lv_style_set_text_color(&style_base, lv_color_hex(0xffffff));
            lv_style_set_text_font(&style_base, NS_Bold_64);

        }
        #endif
        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
    if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "score_panel_#");

        lv_obj_remove_style_all(lv_obj_0);
        lv_obj_add_style(lv_obj_0, &style_base, 0);
        lv_obj_t * wd_flag_0 = wd_flag_create(lv_obj_0);
        wd_flag_bind_code(wd_flag_0, &sb_home_code);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_label_bind_text(lv_label_0, &sb_score, NULL);

        lv_obj_t * wd_flag_1 = wd_flag_create(lv_obj_0);
        wd_flag_bind_code(wd_flag_1, &sb_away_code);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

