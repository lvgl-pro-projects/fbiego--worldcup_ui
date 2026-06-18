
/**
 * @file subjects.c
 * generated from globals.xml. DO NOT EDIT MANUALLY.
 */

/*********************
 *      INCLUDES
 *********************/
                 
#include "subjects.h"
#include "../worldcup_ui.h" 

/**********************
 *  STATIC PROTOTYPES
 **********************/


/**********************
 *  INIT 
 **********************/

void worldcup_subjects_init(void)
{
    /* Re-initialize non-supported subjects in the Editor */

    /* Attach observers for change notifications */

}

/**********************
 * SET FUNCTIONS
 **********************/

void worldcup_subject_set_home(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_home, value);
    lv_unlock();
}

void worldcup_subject_set_away(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_away, value);
    lv_unlock();
}

void worldcup_subject_set_home_code(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_home_code, value);
    lv_unlock();
}

void worldcup_subject_set_away_code(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_away_code, value);
    lv_unlock();
}

void worldcup_subject_set_score(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_score, value);
    lv_unlock();
}

void worldcup_subject_set_status(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_status, value);
    lv_unlock();
}

void worldcup_subject_set_referee(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_referee, value);
    lv_unlock();
}

void worldcup_subject_set_time_date(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_time_date, value);
    lv_unlock();
}

void worldcup_subject_set_connection(const char * value)
{
    lv_lock();
    lv_subject_copy_string(&sb_connection, value);
    lv_unlock();
}

/**********************
 * GET FUNCTIONS
 **********************/

/**********************
 * WEAK FUNCTIONS
 **********************/

/**********************
 * STATIC FUNCTIONS
 **********************/
