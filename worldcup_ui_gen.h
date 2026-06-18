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
extern const void * flag_CIV;
extern const void * flag_QAT;
extern const void * flag_GHA;
extern const void * flag_NZL;
extern const void * flag_GER;
extern const void * flag_EGY;
extern const void * flag_CPV;
extern const void * flag_MEX;
extern const void * flag_SCO;
extern const void * flag_IRQ;
extern const void * flag_KSA;
extern const void * flag_RSA;
extern const void * flag_CRO;
extern const void * flag_USA;
extern const void * flag_MAR;
extern const void * flag_COD;
extern const void * flag_CZE;
extern const void * flag_ENG;
extern const void * flag_JPN;
extern const void * flag_CAN;
extern const void * flag_PAR;
extern const void * flag_ECU;
extern const void * flag_TUR;
extern const void * flag_SEN;
extern const void * flag_BRA;
extern const void * flag_NED;
extern const void * flag_AUS;
extern const void * flag_BIH;
extern const void * flag_URY;
extern const void * flag_ALG;
extern const void * flag_TUN;
extern const void * flag_KOR;
extern const void * flag_PAN;
extern const void * flag_POR;
extern const void * flag_COL;
extern const void * flag_CUW;
extern const void * flag_BEL;
extern const void * flag_FRA;
extern const void * flag_AUT;
extern const void * flag_SWE;
extern const void * flag_NOR;
extern const void * flag_HAI;
extern const void * flag_UZB;
extern const void * flag_IRN;
extern const void * flag_ESP;
extern const void * flag_ARG;
extern const void * flag_SUI;
extern const void * flag_JOR;
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