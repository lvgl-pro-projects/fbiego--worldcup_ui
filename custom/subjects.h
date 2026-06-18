
/**
 * @file subjects.h
 * generated from globals.xml. DO NOT EDIT MANUALLY.
 */

#ifndef SUBJECTS_H
#define SUBJECTS_H


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

                 
/**********************
 * INIT
 **********************/

/**
 * Re-initialize subjects and attach observers.
 */
void worldcup_subjects_init(void);


/**********************
 * SET FUNCTIONS
 **********************/

/**
 * Home Team set function.
 * @param value    New value
 */
void worldcup_subject_set_home(const char * value);

/**
 * Away Team set function.
 * @param value    New value
 */
void worldcup_subject_set_away(const char * value);

/**
 * Home team code set function.
 * @param value    New value
 */
void worldcup_subject_set_home_code(const char * value);

/**
 * Away team code set function.
 * @param value    New value
 */
void worldcup_subject_set_away_code(const char * value);

/**
 * Score set function.
 * @param value    New value
 */
void worldcup_subject_set_score(const char * value);

/**
 * Match status set function.
 * @param value    New value
 */
void worldcup_subject_set_status(const char * value);

/**
 * Referee set function.
 * @param value    New value
 */
void worldcup_subject_set_referee(const char * value);

/**
 * Time date set function.
 * @param value    New value
 */
void worldcup_subject_set_time_date(const char * value);

/**
 * Wifi state set function.
 * @param value    New value
 */
void worldcup_subject_set_connection(const char * value);


/**********************
 * GET FUNCTIONS
 **********************/


/**********************
 * CHANGE FUNCTIONS
 **********************/


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SUBJECTS_H*/
