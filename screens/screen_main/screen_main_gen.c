/**
 * @file screen_main_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_main_gen.h"
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

lv_obj_t * screen_main_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_panel;

    static bool style_inited = false;

    if (!style_inited) {
        #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
        if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
            lv_style_init(&style_main);
            lv_style_set_bg_color(&style_main, lv_color_hex(0x000000));
            lv_style_set_bg_image_src(&style_main, background);
            lv_style_set_bg_image_tiled(&style_main, true);
            lv_style_set_bg_image_recolor(&style_main, lv_color_hex(0x000000));
            lv_style_set_bg_image_recolor_opa(&style_main, 150);
            lv_style_set_pad_ver(&style_main, 20);
            lv_style_set_pad_row(&style_main, 0);
            lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
            lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_COLUMN);
            lv_style_set_flex_main_place(&style_main, LV_FLEX_ALIGN_SPACE_BETWEEN);
            lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);
            lv_style_set_flex_track_place(&style_main, LV_FLEX_ALIGN_CENTER);
            lv_style_set_text_color(&style_main, lv_color_hex(0xFFFFFF));

            lv_style_init(&style_panel);
            lv_style_set_width(&style_panel, lv_pct(100));
            lv_style_set_height(&style_panel, LV_SIZE_CONTENT);
            lv_style_set_pad_row(&style_panel, 4);
            lv_style_set_layout(&style_panel, LV_LAYOUT_FLEX);
            lv_style_set_flex_flow(&style_panel, LV_FLEX_FLOW_COLUMN);
            lv_style_set_flex_cross_place(&style_panel, LV_FLEX_ALIGN_CENTER);
            lv_style_set_flex_track_place(&style_panel, LV_FLEX_ALIGN_CENTER);
            lv_style_set_text_color(&style_panel, lv_color_hex(0xFFFFFF));
            lv_style_set_text_font(&style_panel, NS_Medium_36);

        }
        #endif
        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
    if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_main_#");
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);

        lv_obj_add_style(lv_obj_0, &style_main, 0);
        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_image_set_src(lv_image_0, lvgl_logo);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_remove_style_all(lv_obj_1);
        lv_obj_add_style(lv_obj_1, &style_panel, 0);
        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
        lv_label_set_text(lv_label_0, "FIFA World Cup");
        lv_obj_set_style_text_font(lv_label_0, NS_Medium_24, 0);

        team_panel_create(lv_obj_1);

        lv_obj_t * score_panel_0 = score_panel_create(lv_obj_1);
        lv_obj_set_width(score_panel_0, lv_pct(90));

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
        lv_label_bind_text(lv_label_1, &sb_status, NULL);
        lv_obj_set_style_text_font(lv_label_1, NS_Medium_24, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
        lv_obj_set_width(lv_label_2, lv_pct(90));
        lv_label_bind_text(lv_label_2, &sb_referee, NULL);
        lv_obj_set_style_text_font(lv_label_2, NS_Medium_18, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_SCROLL_CIRCULAR);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_width(lv_label_3, lv_pct(90));
        lv_label_bind_text(lv_label_3, &sb_time_date, NULL);
        lv_obj_set_style_text_font(lv_label_3, NS_Medium_18, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_width(lv_label_4, lv_pct(90));
        lv_label_bind_text(lv_label_4, &sb_connection, NULL);
        lv_obj_set_style_text_font(lv_label_4, NS_Medium_18, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

