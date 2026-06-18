/**
 * @file worldcup_ui_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "worldcup_ui_gen.h"

#if LV_USE_XML
#include "widgets/wd_flag/wd_flag_private_gen.h"
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void check_font(lv_font_t ** font, const char * name);

/**********************
 *  STATIC VARIABLES
 **********************/

static uint32_t worldcup_ui_target = WORLDCUP_UI_TARGET_ALL;

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * NS_Medium_18;
extern lv_font_t NS_Medium_18__data;
lv_font_t * NS_Medium_24;
extern lv_font_t NS_Medium_24__data;
lv_font_t * NS_Medium_32;
extern lv_font_t NS_Medium_32__data;
lv_font_t * NS_Medium_36;
extern lv_font_t NS_Medium_36__data;
lv_font_t * NS_Bold_64;
extern lv_font_t NS_Bold_64__data;

/*----------------
 * Images
 *----------------*/

/* Targets: any */
const void * flag_CIV = NULL;
extern const void * flag_CIV_data;
const void * flag_QAT = NULL;
extern const void * flag_QAT_data;
const void * flag_GHA = NULL;
extern const void * flag_GHA_data;
const void * flag_NZL = NULL;
extern const void * flag_NZL_data;
const void * flag_GER = NULL;
extern const void * flag_GER_data;
const void * flag_EGY = NULL;
extern const void * flag_EGY_data;
const void * flag_CPV = NULL;
extern const void * flag_CPV_data;
const void * flag_MEX = NULL;
extern const void * flag_MEX_data;
const void * flag_SCO = NULL;
extern const void * flag_SCO_data;
const void * flag_IRQ = NULL;
extern const void * flag_IRQ_data;
const void * flag_KSA = NULL;
extern const void * flag_KSA_data;
const void * flag_RSA = NULL;
extern const void * flag_RSA_data;
const void * flag_CRO = NULL;
extern const void * flag_CRO_data;
const void * flag_USA = NULL;
extern const void * flag_USA_data;
const void * flag_MAR = NULL;
extern const void * flag_MAR_data;
const void * flag_COD = NULL;
extern const void * flag_COD_data;
const void * flag_CZE = NULL;
extern const void * flag_CZE_data;
const void * flag_ENG = NULL;
extern const void * flag_ENG_data;
const void * flag_JPN = NULL;
extern const void * flag_JPN_data;
const void * flag_CAN = NULL;
extern const void * flag_CAN_data;
const void * flag_PAR = NULL;
extern const void * flag_PAR_data;
const void * flag_ECU = NULL;
extern const void * flag_ECU_data;
const void * flag_TUR = NULL;
extern const void * flag_TUR_data;
const void * flag_SEN = NULL;
extern const void * flag_SEN_data;
const void * flag_BRA = NULL;
extern const void * flag_BRA_data;
const void * flag_NED = NULL;
extern const void * flag_NED_data;
const void * flag_AUS = NULL;
extern const void * flag_AUS_data;
const void * flag_BIH = NULL;
extern const void * flag_BIH_data;
const void * flag_URY = NULL;
extern const void * flag_URY_data;
const void * flag_ALG = NULL;
extern const void * flag_ALG_data;
const void * flag_TUN = NULL;
extern const void * flag_TUN_data;
const void * flag_KOR = NULL;
extern const void * flag_KOR_data;
const void * flag_PAN = NULL;
extern const void * flag_PAN_data;
const void * flag_POR = NULL;
extern const void * flag_POR_data;
const void * flag_COL = NULL;
extern const void * flag_COL_data;
const void * flag_CUW = NULL;
extern const void * flag_CUW_data;
const void * flag_BEL = NULL;
extern const void * flag_BEL_data;
const void * flag_FRA = NULL;
extern const void * flag_FRA_data;
const void * flag_AUT = NULL;
extern const void * flag_AUT_data;
const void * flag_SWE = NULL;
extern const void * flag_SWE_data;
const void * flag_NOR = NULL;
extern const void * flag_NOR_data;
const void * flag_HAI = NULL;
extern const void * flag_HAI_data;
const void * flag_UZB = NULL;
extern const void * flag_UZB_data;
const void * flag_IRN = NULL;
extern const void * flag_IRN_data;
const void * flag_ESP = NULL;
extern const void * flag_ESP_data;
const void * flag_ARG = NULL;
extern const void * flag_ARG_data;
const void * flag_SUI = NULL;
extern const void * flag_SUI_data;
const void * flag_JOR = NULL;
extern const void * flag_JOR_data;
const void * background = NULL;
extern const void * background_data;
const void * lvgl_logo = NULL;
extern const void * lvgl_logo_data;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

lv_subject_t sb_home;
lv_subject_t sb_away;
lv_subject_t sb_home_code;
lv_subject_t sb_away_code;
lv_subject_t sb_score;
lv_subject_t sb_status;
lv_subject_t sb_referee;
lv_subject_t sb_time_date;
lv_subject_t sb_connection;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void worldcup_ui_init_gen(const char * asset_path)
{
    char buf[256];


    /*----------------
     * Fonts
     *----------------*/

    /* Targets: any */

    #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
    if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
        if (!NS_Medium_18) {
            /* NS_Medium_18 */
            /* get font 'NS_Medium_18' from a C array */
            NS_Medium_18 = &NS_Medium_18__data;

        }
        if (!NS_Medium_24) {
            /* NS_Medium_24 */
            /* get font 'NS_Medium_24' from a C array */
            NS_Medium_24 = &NS_Medium_24__data;

        }
        if (!NS_Medium_32) {
            /* NS_Medium_32 */
            /* get font 'NS_Medium_32' from a C array */
            NS_Medium_32 = &NS_Medium_32__data;

        }
        if (!NS_Medium_36) {
            /* NS_Medium_36 */
            /* get font 'NS_Medium_36' from a C array */
            NS_Medium_36 = &NS_Medium_36__data;

        }
        if (!NS_Bold_64) {
            /* NS_Bold_64 */
            /* get font 'NS_Bold_64' from a C array */
            NS_Bold_64 = &NS_Bold_64__data;

        }
    }
    #endif

    /*----------------
     * Images
     *----------------*/

    /* Targets: any */
    #if WORLDCUP_UI_CHECK_COMPILE_TARGET(WORLDCUP_UI_TARGET_ALL)
    if (worldcup_ui_check_target(WORLDCUP_UI_TARGET_ALL)) {
        /* flag_CIV */
        if (!flag_CIV) {
            flag_CIV = &flag_CIV_data;
        }
        /* flag_QAT */
        if (!flag_QAT) {
            flag_QAT = &flag_QAT_data;
        }
        /* flag_GHA */
        if (!flag_GHA) {
            flag_GHA = &flag_GHA_data;
        }
        /* flag_NZL */
        if (!flag_NZL) {
            flag_NZL = &flag_NZL_data;
        }
        /* flag_GER */
        if (!flag_GER) {
            flag_GER = &flag_GER_data;
        }
        /* flag_EGY */
        if (!flag_EGY) {
            flag_EGY = &flag_EGY_data;
        }
        /* flag_CPV */
        if (!flag_CPV) {
            flag_CPV = &flag_CPV_data;
        }
        /* flag_MEX */
        if (!flag_MEX) {
            flag_MEX = &flag_MEX_data;
        }
        /* flag_SCO */
        if (!flag_SCO) {
            flag_SCO = &flag_SCO_data;
        }
        /* flag_IRQ */
        if (!flag_IRQ) {
            flag_IRQ = &flag_IRQ_data;
        }
        /* flag_KSA */
        if (!flag_KSA) {
            flag_KSA = &flag_KSA_data;
        }
        /* flag_RSA */
        if (!flag_RSA) {
            flag_RSA = &flag_RSA_data;
        }
        /* flag_CRO */
        if (!flag_CRO) {
            flag_CRO = &flag_CRO_data;
        }
        /* flag_USA */
        if (!flag_USA) {
            flag_USA = &flag_USA_data;
        }
        /* flag_MAR */
        if (!flag_MAR) {
            flag_MAR = &flag_MAR_data;
        }
        /* flag_COD */
        if (!flag_COD) {
            flag_COD = &flag_COD_data;
        }
        /* flag_CZE */
        if (!flag_CZE) {
            flag_CZE = &flag_CZE_data;
        }
        /* flag_ENG */
        if (!flag_ENG) {
            flag_ENG = &flag_ENG_data;
        }
        /* flag_JPN */
        if (!flag_JPN) {
            flag_JPN = &flag_JPN_data;
        }
        /* flag_CAN */
        if (!flag_CAN) {
            flag_CAN = &flag_CAN_data;
        }
        /* flag_PAR */
        if (!flag_PAR) {
            flag_PAR = &flag_PAR_data;
        }
        /* flag_ECU */
        if (!flag_ECU) {
            flag_ECU = &flag_ECU_data;
        }
        /* flag_TUR */
        if (!flag_TUR) {
            flag_TUR = &flag_TUR_data;
        }
        /* flag_SEN */
        if (!flag_SEN) {
            flag_SEN = &flag_SEN_data;
        }
        /* flag_BRA */
        if (!flag_BRA) {
            flag_BRA = &flag_BRA_data;
        }
        /* flag_NED */
        if (!flag_NED) {
            flag_NED = &flag_NED_data;
        }
        /* flag_AUS */
        if (!flag_AUS) {
            flag_AUS = &flag_AUS_data;
        }
        /* flag_BIH */
        if (!flag_BIH) {
            flag_BIH = &flag_BIH_data;
        }
        /* flag_URY */
        if (!flag_URY) {
            flag_URY = &flag_URY_data;
        }
        /* flag_ALG */
        if (!flag_ALG) {
            flag_ALG = &flag_ALG_data;
        }
        /* flag_TUN */
        if (!flag_TUN) {
            flag_TUN = &flag_TUN_data;
        }
        /* flag_KOR */
        if (!flag_KOR) {
            flag_KOR = &flag_KOR_data;
        }
        /* flag_PAN */
        if (!flag_PAN) {
            flag_PAN = &flag_PAN_data;
        }
        /* flag_POR */
        if (!flag_POR) {
            flag_POR = &flag_POR_data;
        }
        /* flag_COL */
        if (!flag_COL) {
            flag_COL = &flag_COL_data;
        }
        /* flag_CUW */
        if (!flag_CUW) {
            flag_CUW = &flag_CUW_data;
        }
        /* flag_BEL */
        if (!flag_BEL) {
            flag_BEL = &flag_BEL_data;
        }
        /* flag_FRA */
        if (!flag_FRA) {
            flag_FRA = &flag_FRA_data;
        }
        /* flag_AUT */
        if (!flag_AUT) {
            flag_AUT = &flag_AUT_data;
        }
        /* flag_SWE */
        if (!flag_SWE) {
            flag_SWE = &flag_SWE_data;
        }
        /* flag_NOR */
        if (!flag_NOR) {
            flag_NOR = &flag_NOR_data;
        }
        /* flag_HAI */
        if (!flag_HAI) {
            flag_HAI = &flag_HAI_data;
        }
        /* flag_UZB */
        if (!flag_UZB) {
            flag_UZB = &flag_UZB_data;
        }
        /* flag_IRN */
        if (!flag_IRN) {
            flag_IRN = &flag_IRN_data;
        }
        /* flag_ESP */
        if (!flag_ESP) {
            flag_ESP = &flag_ESP_data;
        }
        /* flag_ARG */
        if (!flag_ARG) {
            flag_ARG = &flag_ARG_data;
        }
        /* flag_SUI */
        if (!flag_SUI) {
            flag_SUI = &flag_SUI_data;
        }
        /* flag_JOR */
        if (!flag_JOR) {
            flag_JOR = &flag_JOR_data;
        }
        /* background */
        if (!background) {
            background = &background_data;
        }
        /* lvgl_logo */
        if (!lvgl_logo) {
            lvgl_logo = &lvgl_logo_data;
        }
    }
    #endif

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Subjects
     *----------------*/
    static char sb_home_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_home_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_home,
                           sb_home_buf,
                           sb_home_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Home Team"
                          );
    static char sb_away_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_away_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_away,
                           sb_away_buf,
                           sb_away_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Away Team"
                          );
    static char sb_home_code_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_home_code_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_home_code,
                           sb_home_code_buf,
                           sb_home_code_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "N/A"
                          );
    static char sb_away_code_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_away_code_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_away_code,
                           sb_away_code_buf,
                           sb_away_code_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "N/A"
                          );
    static char sb_score_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_score_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_score,
                           sb_score_buf,
                           sb_score_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "-:-"
                          );
    static char sb_status_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_status_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_status,
                           sb_status_buf,
                           sb_status_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           ""
                          );
    static char sb_referee_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_referee_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_referee,
                           sb_referee_buf,
                           sb_referee_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           ""
                          );
    static char sb_time_date_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_time_date_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_time_date,
                           sb_time_date_buf,
                           sb_time_date_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Not set"
                          );
    static char sb_connection_buf[UI_SUBJECT_STRING_LENGTH];
    static char sb_connection_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&sb_connection,
                           sb_connection_buf,
                           sb_connection_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Connecting"
                          );

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */
    wd_flag_register();

    /* Check all fonts / default if needed. This prevents fonts that are used in one target but
       defined in another from causing assertion failures during rendering of the Preview. */
    check_font(&NS_Medium_18, "NS_Medium_18");
    check_font(&NS_Medium_24, "NS_Medium_24");
    check_font(&NS_Medium_32, "NS_Medium_32");
    check_font(&NS_Medium_36, "NS_Medium_36");
    check_font(&NS_Bold_64, "NS_Bold_64");

    /* Register fonts */
    lv_xml_register_font(NULL, "NS_Medium_18", NS_Medium_18);
    lv_xml_register_font(NULL, "NS_Medium_24", NS_Medium_24);
    lv_xml_register_font(NULL, "NS_Medium_32", NS_Medium_32);
    lv_xml_register_font(NULL, "NS_Medium_36", NS_Medium_36);
    lv_xml_register_font(NULL, "NS_Bold_64", NS_Bold_64);

    /* Register subjects */
    lv_xml_register_subject(NULL, "sb_home", &sb_home);
    lv_xml_register_subject(NULL, "sb_away", &sb_away);
    lv_xml_register_subject(NULL, "sb_home_code", &sb_home_code);
    lv_xml_register_subject(NULL, "sb_away_code", &sb_away_code);
    lv_xml_register_subject(NULL, "sb_score", &sb_score);
    lv_xml_register_subject(NULL, "sb_status", &sb_status);
    lv_xml_register_subject(NULL, "sb_referee", &sb_referee);
    lv_xml_register_subject(NULL, "sb_time_date", &sb_time_date);
    lv_xml_register_subject(NULL, "sb_connection", &sb_connection);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "flag_CIV", flag_CIV);
    lv_xml_register_image(NULL, "flag_QAT", flag_QAT);
    lv_xml_register_image(NULL, "flag_GHA", flag_GHA);
    lv_xml_register_image(NULL, "flag_NZL", flag_NZL);
    lv_xml_register_image(NULL, "flag_GER", flag_GER);
    lv_xml_register_image(NULL, "flag_EGY", flag_EGY);
    lv_xml_register_image(NULL, "flag_CPV", flag_CPV);
    lv_xml_register_image(NULL, "flag_MEX", flag_MEX);
    lv_xml_register_image(NULL, "flag_SCO", flag_SCO);
    lv_xml_register_image(NULL, "flag_IRQ", flag_IRQ);
    lv_xml_register_image(NULL, "flag_KSA", flag_KSA);
    lv_xml_register_image(NULL, "flag_RSA", flag_RSA);
    lv_xml_register_image(NULL, "flag_CRO", flag_CRO);
    lv_xml_register_image(NULL, "flag_USA", flag_USA);
    lv_xml_register_image(NULL, "flag_MAR", flag_MAR);
    lv_xml_register_image(NULL, "flag_COD", flag_COD);
    lv_xml_register_image(NULL, "flag_CZE", flag_CZE);
    lv_xml_register_image(NULL, "flag_ENG", flag_ENG);
    lv_xml_register_image(NULL, "flag_JPN", flag_JPN);
    lv_xml_register_image(NULL, "flag_CAN", flag_CAN);
    lv_xml_register_image(NULL, "flag_PAR", flag_PAR);
    lv_xml_register_image(NULL, "flag_ECU", flag_ECU);
    lv_xml_register_image(NULL, "flag_TUR", flag_TUR);
    lv_xml_register_image(NULL, "flag_SEN", flag_SEN);
    lv_xml_register_image(NULL, "flag_BRA", flag_BRA);
    lv_xml_register_image(NULL, "flag_NED", flag_NED);
    lv_xml_register_image(NULL, "flag_AUS", flag_AUS);
    lv_xml_register_image(NULL, "flag_BIH", flag_BIH);
    lv_xml_register_image(NULL, "flag_URY", flag_URY);
    lv_xml_register_image(NULL, "flag_ALG", flag_ALG);
    lv_xml_register_image(NULL, "flag_TUN", flag_TUN);
    lv_xml_register_image(NULL, "flag_KOR", flag_KOR);
    lv_xml_register_image(NULL, "flag_PAN", flag_PAN);
    lv_xml_register_image(NULL, "flag_POR", flag_POR);
    lv_xml_register_image(NULL, "flag_COL", flag_COL);
    lv_xml_register_image(NULL, "flag_CUW", flag_CUW);
    lv_xml_register_image(NULL, "flag_BEL", flag_BEL);
    lv_xml_register_image(NULL, "flag_FRA", flag_FRA);
    lv_xml_register_image(NULL, "flag_AUT", flag_AUT);
    lv_xml_register_image(NULL, "flag_SWE", flag_SWE);
    lv_xml_register_image(NULL, "flag_NOR", flag_NOR);
    lv_xml_register_image(NULL, "flag_HAI", flag_HAI);
    lv_xml_register_image(NULL, "flag_UZB", flag_UZB);
    lv_xml_register_image(NULL, "flag_IRN", flag_IRN);
    lv_xml_register_image(NULL, "flag_ESP", flag_ESP);
    lv_xml_register_image(NULL, "flag_ARG", flag_ARG);
    lv_xml_register_image(NULL, "flag_SUI", flag_SUI);
    lv_xml_register_image(NULL, "flag_JOR", flag_JOR);
    lv_xml_register_image(NULL, "background", background);
    lv_xml_register_image(NULL, "lvgl_logo", lvgl_logo);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manually from XML using lv_xml_create() */
#endif
}

void worldcup_ui_set_target(uint32_t target)
{
    worldcup_ui_target = target;
}

uint32_t worldcup_ui_get_target(void)
{
    return worldcup_ui_target;
}

bool worldcup_ui_check_target(uint32_t target)
{
    return (worldcup_ui_target & target) ? true : false;
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void check_font(lv_font_t ** font, const char * name)
{
    if (!(*font)) {
        *font = (lv_font_t *)LV_FONT_DEFAULT;
        LV_LOG_WARN("font `%s` was not set. Using `LV_FONT_DEFAULT` instead", name);
    }
}