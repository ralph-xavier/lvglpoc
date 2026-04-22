/**
 * @file ui_hello_world_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "ui_hello_world_gen.h"

#if LV_USE_XML
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

/**********************
 *  STATIC VARIABLES
 **********************/

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

lv_font_t * font_medium;
extern lv_font_t font_medium_data;
lv_font_t * ui_font_Monaco12;
extern lv_font_t ui_font_Monaco12_data;
lv_font_t * ui_font_Monaco14;
extern lv_font_t ui_font_Monaco14_data;
lv_font_t * ui_font_Monaco16;
extern lv_font_t ui_font_Monaco16_data;
lv_font_t * ui_font_Monaco18;
extern lv_font_t ui_font_Monaco18_data;
lv_font_t * ui_font_Monaco20;
extern lv_font_t ui_font_Monaco20_data;
lv_font_t * ui_font_Monaco22;
extern lv_font_t ui_font_Monaco22_data;
lv_font_t * ui_font_Monaco24;
extern lv_font_t ui_font_Monaco24_data;
lv_font_t * ui_font_Monaco40;
extern lv_font_t ui_font_Monaco40_data;

/*----------------
 * Images
 *----------------*/

const void * needle;
extern const void * needle_data;
const void * overlay;
extern const void * overlay_data;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

lv_subject_t vfo_keyboard_visible;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_hello_world_init_gen(const char * asset_path)
{
    char buf[256];


    /*----------------
     * Fonts
     *----------------*/

    /* get font 'font_medium' from a C array */
    font_medium = &font_medium_data;
    /* get font 'ui_font_Monaco12' from a C array */
    ui_font_Monaco12 = &ui_font_Monaco12_data;
    /* get font 'ui_font_Monaco14' from a C array */
    ui_font_Monaco14 = &ui_font_Monaco14_data;
    /* get font 'ui_font_Monaco16' from a C array */
    ui_font_Monaco16 = &ui_font_Monaco16_data;
    /* get font 'ui_font_Monaco18' from a C array */
    ui_font_Monaco18 = &ui_font_Monaco18_data;
    /* get font 'ui_font_Monaco20' from a C array */
    ui_font_Monaco20 = &ui_font_Monaco20_data;
    /* get font 'ui_font_Monaco22' from a C array */
    ui_font_Monaco22 = &ui_font_Monaco22_data;
    /* get font 'ui_font_Monaco24' from a C array */
    ui_font_Monaco24 = &ui_font_Monaco24_data;
    /* get font 'ui_font_Monaco40' from a C array */
    ui_font_Monaco40 = &ui_font_Monaco40_data;


    /*----------------
     * Images
     *----------------*/
    needle = &needle_data;
    overlay = &overlay_data;

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&vfo_keyboard_visible, 0);
    lv_subject_set_min_value_int(&vfo_keyboard_visible, 0);
    lv_subject_set_max_value_int(&vfo_keyboard_visible, 1);

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "font_medium", font_medium);
    lv_xml_register_font(NULL, "ui_font_Monaco12", ui_font_Monaco12);
    lv_xml_register_font(NULL, "ui_font_Monaco14", ui_font_Monaco14);
    lv_xml_register_font(NULL, "ui_font_Monaco16", ui_font_Monaco16);
    lv_xml_register_font(NULL, "ui_font_Monaco18", ui_font_Monaco18);
    lv_xml_register_font(NULL, "ui_font_Monaco20", ui_font_Monaco20);
    lv_xml_register_font(NULL, "ui_font_Monaco22", ui_font_Monaco22);
    lv_xml_register_font(NULL, "ui_font_Monaco24", ui_font_Monaco24);
    lv_xml_register_font(NULL, "ui_font_Monaco40", ui_font_Monaco40);

    /* Register subjects */
    lv_xml_register_subject(NULL, "vfo_keyboard_visible", &vfo_keyboard_visible);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "needle", needle);
    lv_xml_register_image(NULL, "overlay", overlay);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/