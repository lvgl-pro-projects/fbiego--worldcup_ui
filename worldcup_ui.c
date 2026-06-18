/**
 * @file worldcup_ui.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "worldcup_ui.h"

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

void worldcup_ui_init(const char * asset_path)
{
    LV_LOG("Initializing custom C code using LVGL v%d.%d.%d", LVGL_VERSION_MAJOR, LVGL_VERSION_MINOR, LVGL_VERSION_PATCH);

    worldcup_ui_init_gen(asset_path);

    /* Add your own custom code here if needed */

    worldcup_subjects_init();

#if defined(LV_EDITOR_PREVIEW)

    worldcup_subject_set_home("Czechia");
    worldcup_subject_set_away("South Africa");
    worldcup_subject_set_score("1:0");
    worldcup_subject_set_home_code("CZE");
    worldcup_subject_set_away_code("RSA");
    worldcup_subject_set_status("In play");
    worldcup_subject_set_referee("Referee: Tori Penso, USA");

    worldcup_subject_set_time_date("19:25:23\nThu 18 Jun");
    worldcup_subject_set_connection("Connected");

#endif
}

/**********************
 *   STATIC FUNCTIONS
 **********************/