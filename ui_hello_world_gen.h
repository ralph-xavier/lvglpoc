/**
 * @file ui_hello_world_gen.h
 */

#ifndef UI_HELLO_WORLD_GEN_H
#define UI_HELLO_WORLD_GEN_H

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
    #include "src/core/lv_obj_class_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/src/core/lv_obj_class_private.h"
#endif



/*********************
 *      DEFINES
 *********************/

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

extern lv_font_t * font_medium;

extern lv_font_t * ui_font_Monaco12;

extern lv_font_t * ui_font_Monaco14;

extern lv_font_t * ui_font_Monaco16;

extern lv_font_t * ui_font_Monaco18;

extern lv_font_t * ui_font_Monaco20;

extern lv_font_t * ui_font_Monaco22;

extern lv_font_t * ui_font_Monaco24;

extern lv_font_t * ui_font_Monaco40;

/*----------------
 * Images
 *----------------*/

extern const void * needle;
extern const void * overlay;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t vfo_keyboard_visible;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void ui_hello_world_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "screens/screen_hello_world_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_HELLO_WORLD_GEN_H*/