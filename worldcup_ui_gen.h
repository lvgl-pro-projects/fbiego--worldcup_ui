/**
 * @file worldcup_ui_gen.h
 */

#ifndef WORLDCUP_UI_GEN_H
#define WORLDCUP_UI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

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



/* Prototypes for target functions, needed by responsive const definitions */

void worldcup_ui_set_target(uint32_t target);
uint32_t worldcup_ui_get_target(void);
bool worldcup_ui_check_target(uint32_t target);

/*********************
 *      DEFINES
 *********************/

#define WORLDCUP_UI_TARGET_UNDEFINED  (0 << 1)
#define WORLDCUP_UI_TARGET_TARGET1    (1 << 1)
#define WORLDCUP_UI_TARGET_ALL        0x0FFFFFFF

/* By default compile for all targets, allowing to switch to any targets at runtime */
#ifndef WORLDCUP_UI_COMPILE_TARGET
#define WORLDCUP_UI_COMPILE_TARGET WORLDCUP_UI_TARGET_ALL
#endif

#define WORLDCUP_UI_CHECK_COMPILE_TARGET(target) (WORLDCUP_UI_COMPILE_TARGET & (target) ? 1 : 0)

#ifndef LV_XML_EVAL_STRING_BUF_SIZE
    #define LV_XML_EVAL_STRING_BUF_SIZE 256
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/* Targets: any */
extern lv_font_t * NS_Medium_18;
extern lv_font_t * NS_Medium_24;
extern lv_font_t * NS_Medium_32;
extern lv_font_t * NS_Medium_36;
extern lv_font_t * NS_Bold_64;


/*----------------
 * Images
 *----------------*/

/* Targets: any */
extern const void * CIV;
extern const void * QAT;
extern const void * GHA;
extern const void * NZL;
extern const void * GER;
extern const void * EGY;
extern const void * CPV;
extern const void * MEX;
extern const void * SCO;
extern const void * IRQ;
extern const void * KSA;
extern const void * RSA;
extern const void * CRO;
extern const void * USA;
extern const void * MAR;
extern const void * COD;
extern const void * CZE;
extern const void * ENG;
extern const void * JPN;
extern const void * CAN;
extern const void * PAR;
extern const void * ECU;
extern const void * TUR;
extern const void * SEN;
extern const void * BRA;
extern const void * NED;
extern const void * AUS;
extern const void * BIH;
extern const void * URY;
extern const void * ALG;
extern const void * TUN;
extern const void * KOR;
extern const void * PAN;
extern const void * POR;
extern const void * COL;
extern const void * CUW;
extern const void * BEL;
extern const void * FRA;
extern const void * AUT;
extern const void * SWE;
extern const void * NOR;
extern const void * HAI;
extern const void * UZB;
extern const void * IRN;
extern const void * ESP;
extern const void * ARG;
extern const void * SUI;
extern const void * JOR;
extern const void * background;
extern const void * lvgl_logo;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t sb_home;
extern lv_subject_t sb_away;
extern lv_subject_t sb_home_code;
extern lv_subject_t sb_away_code;
extern lv_subject_t sb_score;
extern lv_subject_t sb_status;
extern lv_subject_t sb_referee;
extern lv_subject_t sb_time_date;
extern lv_subject_t sb_connection;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void worldcup_ui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "components/score_panel/score_panel_gen.h"
#include "components/team_panel/team_panel_gen.h"
#include "screens/screen_main/screen_main_gen.h"
#include "widgets/wd_flag/wd_flag_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*WORLDCUP_UI_GEN_H*/