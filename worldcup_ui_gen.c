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
const void * CIV = NULL;
extern const void * CIV_data;
const void * QAT = NULL;
extern const void * QAT_data;
const void * GHA = NULL;
extern const void * GHA_data;
const void * NZL = NULL;
extern const void * NZL_data;
const void * GER = NULL;
extern const void * GER_data;
const void * EGY = NULL;
extern const void * EGY_data;
const void * CPV = NULL;
extern const void * CPV_data;
const void * MEX = NULL;
extern const void * MEX_data;
const void * SCO = NULL;
extern const void * SCO_data;
const void * IRQ = NULL;
extern const void * IRQ_data;
const void * KSA = NULL;
extern const void * KSA_data;
const void * RSA = NULL;
extern const void * RSA_data;
const void * CRO = NULL;
extern const void * CRO_data;
const void * USA = NULL;
extern const void * USA_data;
const void * MAR = NULL;
extern const void * MAR_data;
const void * COD = NULL;
extern const void * COD_data;
const void * CZE = NULL;
extern const void * CZE_data;
const void * ENG = NULL;
extern const void * ENG_data;
const void * JPN = NULL;
extern const void * JPN_data;
const void * CAN = NULL;
extern const void * CAN_data;
const void * PAR = NULL;
extern const void * PAR_data;
const void * ECU = NULL;
extern const void * ECU_data;
const void * TUR = NULL;
extern const void * TUR_data;
const void * SEN = NULL;
extern const void * SEN_data;
const void * BRA = NULL;
extern const void * BRA_data;
const void * NED = NULL;
extern const void * NED_data;
const void * AUS = NULL;
extern const void * AUS_data;
const void * BIH = NULL;
extern const void * BIH_data;
const void * URY = NULL;
extern const void * URY_data;
const void * ALG = NULL;
extern const void * ALG_data;
const void * TUN = NULL;
extern const void * TUN_data;
const void * KOR = NULL;
extern const void * KOR_data;
const void * PAN = NULL;
extern const void * PAN_data;
const void * POR = NULL;
extern const void * POR_data;
const void * COL = NULL;
extern const void * COL_data;
const void * CUW = NULL;
extern const void * CUW_data;
const void * BEL = NULL;
extern const void * BEL_data;
const void * FRA = NULL;
extern const void * FRA_data;
const void * AUT = NULL;
extern const void * AUT_data;
const void * SWE = NULL;
extern const void * SWE_data;
const void * NOR = NULL;
extern const void * NOR_data;
const void * HAI = NULL;
extern const void * HAI_data;
const void * UZB = NULL;
extern const void * UZB_data;
const void * IRN = NULL;
extern const void * IRN_data;
const void * ESP = NULL;
extern const void * ESP_data;
const void * ARG = NULL;
extern const void * ARG_data;
const void * SUI = NULL;
extern const void * SUI_data;
const void * JOR = NULL;
extern const void * JOR_data;
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
        /* CIV */
        if (!CIV) {
            CIV = &CIV_data;
        }
        /* QAT */
        if (!QAT) {
            QAT = &QAT_data;
        }
        /* GHA */
        if (!GHA) {
            GHA = &GHA_data;
        }
        /* NZL */
        if (!NZL) {
            NZL = &NZL_data;
        }
        /* GER */
        if (!GER) {
            GER = &GER_data;
        }
        /* EGY */
        if (!EGY) {
            EGY = &EGY_data;
        }
        /* CPV */
        if (!CPV) {
            CPV = &CPV_data;
        }
        /* MEX */
        if (!MEX) {
            MEX = &MEX_data;
        }
        /* SCO */
        if (!SCO) {
            SCO = &SCO_data;
        }
        /* IRQ */
        if (!IRQ) {
            IRQ = &IRQ_data;
        }
        /* KSA */
        if (!KSA) {
            KSA = &KSA_data;
        }
        /* RSA */
        if (!RSA) {
            RSA = &RSA_data;
        }
        /* CRO */
        if (!CRO) {
            CRO = &CRO_data;
        }
        /* USA */
        if (!USA) {
            USA = &USA_data;
        }
        /* MAR */
        if (!MAR) {
            MAR = &MAR_data;
        }
        /* COD */
        if (!COD) {
            COD = &COD_data;
        }
        /* CZE */
        if (!CZE) {
            CZE = &CZE_data;
        }
        /* ENG */
        if (!ENG) {
            ENG = &ENG_data;
        }
        /* JPN */
        if (!JPN) {
            JPN = &JPN_data;
        }
        /* CAN */
        if (!CAN) {
            CAN = &CAN_data;
        }
        /* PAR */
        if (!PAR) {
            PAR = &PAR_data;
        }
        /* ECU */
        if (!ECU) {
            ECU = &ECU_data;
        }
        /* TUR */
        if (!TUR) {
            TUR = &TUR_data;
        }
        /* SEN */
        if (!SEN) {
            SEN = &SEN_data;
        }
        /* BRA */
        if (!BRA) {
            BRA = &BRA_data;
        }
        /* NED */
        if (!NED) {
            NED = &NED_data;
        }
        /* AUS */
        if (!AUS) {
            AUS = &AUS_data;
        }
        /* BIH */
        if (!BIH) {
            BIH = &BIH_data;
        }
        /* URY */
        if (!URY) {
            URY = &URY_data;
        }
        /* ALG */
        if (!ALG) {
            ALG = &ALG_data;
        }
        /* TUN */
        if (!TUN) {
            TUN = &TUN_data;
        }
        /* KOR */
        if (!KOR) {
            KOR = &KOR_data;
        }
        /* PAN */
        if (!PAN) {
            PAN = &PAN_data;
        }
        /* POR */
        if (!POR) {
            POR = &POR_data;
        }
        /* COL */
        if (!COL) {
            COL = &COL_data;
        }
        /* CUW */
        if (!CUW) {
            CUW = &CUW_data;
        }
        /* BEL */
        if (!BEL) {
            BEL = &BEL_data;
        }
        /* FRA */
        if (!FRA) {
            FRA = &FRA_data;
        }
        /* AUT */
        if (!AUT) {
            AUT = &AUT_data;
        }
        /* SWE */
        if (!SWE) {
            SWE = &SWE_data;
        }
        /* NOR */
        if (!NOR) {
            NOR = &NOR_data;
        }
        /* HAI */
        if (!HAI) {
            HAI = &HAI_data;
        }
        /* UZB */
        if (!UZB) {
            UZB = &UZB_data;
        }
        /* IRN */
        if (!IRN) {
            IRN = &IRN_data;
        }
        /* ESP */
        if (!ESP) {
            ESP = &ESP_data;
        }
        /* ARG */
        if (!ARG) {
            ARG = &ARG_data;
        }
        /* SUI */
        if (!SUI) {
            SUI = &SUI_data;
        }
        /* JOR */
        if (!JOR) {
            JOR = &JOR_data;
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
    lv_xml_register_image(NULL, "CIV", CIV);
    lv_xml_register_image(NULL, "QAT", QAT);
    lv_xml_register_image(NULL, "GHA", GHA);
    lv_xml_register_image(NULL, "NZL", NZL);
    lv_xml_register_image(NULL, "GER", GER);
    lv_xml_register_image(NULL, "EGY", EGY);
    lv_xml_register_image(NULL, "CPV", CPV);
    lv_xml_register_image(NULL, "MEX", MEX);
    lv_xml_register_image(NULL, "SCO", SCO);
    lv_xml_register_image(NULL, "IRQ", IRQ);
    lv_xml_register_image(NULL, "KSA", KSA);
    lv_xml_register_image(NULL, "RSA", RSA);
    lv_xml_register_image(NULL, "CRO", CRO);
    lv_xml_register_image(NULL, "USA", USA);
    lv_xml_register_image(NULL, "MAR", MAR);
    lv_xml_register_image(NULL, "COD", COD);
    lv_xml_register_image(NULL, "CZE", CZE);
    lv_xml_register_image(NULL, "ENG", ENG);
    lv_xml_register_image(NULL, "JPN", JPN);
    lv_xml_register_image(NULL, "CAN", CAN);
    lv_xml_register_image(NULL, "PAR", PAR);
    lv_xml_register_image(NULL, "ECU", ECU);
    lv_xml_register_image(NULL, "TUR", TUR);
    lv_xml_register_image(NULL, "SEN", SEN);
    lv_xml_register_image(NULL, "BRA", BRA);
    lv_xml_register_image(NULL, "NED", NED);
    lv_xml_register_image(NULL, "AUS", AUS);
    lv_xml_register_image(NULL, "BIH", BIH);
    lv_xml_register_image(NULL, "URY", URY);
    lv_xml_register_image(NULL, "ALG", ALG);
    lv_xml_register_image(NULL, "TUN", TUN);
    lv_xml_register_image(NULL, "KOR", KOR);
    lv_xml_register_image(NULL, "PAN", PAN);
    lv_xml_register_image(NULL, "POR", POR);
    lv_xml_register_image(NULL, "COL", COL);
    lv_xml_register_image(NULL, "CUW", CUW);
    lv_xml_register_image(NULL, "BEL", BEL);
    lv_xml_register_image(NULL, "FRA", FRA);
    lv_xml_register_image(NULL, "AUT", AUT);
    lv_xml_register_image(NULL, "SWE", SWE);
    lv_xml_register_image(NULL, "NOR", NOR);
    lv_xml_register_image(NULL, "HAI", HAI);
    lv_xml_register_image(NULL, "UZB", UZB);
    lv_xml_register_image(NULL, "IRN", IRN);
    lv_xml_register_image(NULL, "ESP", ESP);
    lv_xml_register_image(NULL, "ARG", ARG);
    lv_xml_register_image(NULL, "SUI", SUI);
    lv_xml_register_image(NULL, "JOR", JOR);
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