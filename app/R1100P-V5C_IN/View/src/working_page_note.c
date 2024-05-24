#include "../inc/working_page_note.h"
#include <stdlib.h>
#include <stdbool.h>
#include "math.h"
#include "../inc/images_v4_0.h"
#include "../inc/UiSubjectsWrapper.h"
#include "../inc/sysparas_defs.h"
#include "../../View/GUI_APP/language_control.h"
#include "../inc/UiRun.h"

static void note_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);

lv_obj_t* working_page_note_init(lv_obj_t *page)
{
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_text_color(&style, lv_color_black());
    lv_style_set_bg_opa(&style, LV_OPA_TRANSP);
    lv_style_set_text_font(&style, &working_mode_24px);
    lv_style_set_text_align(&style, LV_TEXT_ALIGN_CENTER);

    static lv_style_t style0;
    lv_style_init(&style0);
    lv_style_set_bg_color(&style0, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_bg_opa(&style0, LV_OPA_COVER);
    lv_style_set_border_width(&style0, 2);
    lv_style_set_border_color(&style0, lv_color_make(0xde, 0xde, 0xde));

    uint16_t parent_width, parent_height;

    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);

    static lv_style_t style02;
    lv_style_init(&style02);
    lv_style_set_text_color(&style02, lv_color_black());
    lv_style_set_text_font(&style02, &working_mode_24px);
    lv_style_set_text_align(&style02, LV_TEXT_ALIGN_CENTER);

    static lv_style_t bg_style;
    lv_style_init(&bg_style);
    lv_style_set_bg_color(&bg_style, lv_color_white());
    lv_style_set_bg_opa(&bg_style, 255);
    lv_style_set_border_width(&bg_style, 2);
    lv_style_set_border_color(&bg_style, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_radius(&bg_style,0);
    lv_style_set_pad_all(&bg_style,0);

    lv_obj_t *obj = lv_obj_create(page);
    lv_obj_set_size(obj, parent_width, parent_height - 40 - 40);
    lv_obj_set_pos(obj, 0, 40);
    lv_obj_add_style(obj, &bg_style, 0);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    // 排量
    lv_obj_t *temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &current_level);
    lv_obj_set_pos(temp_obj, 30 + 3, 10);
    lv_img_set_zoom(temp_obj, 320);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &watercold);
    lv_obj_set_pos(temp_obj, 30 - 3, 10 + 1 * 50 - 3);
    lv_img_set_zoom(temp_obj, 200);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &qiangli);
    lv_obj_set_pos(temp_obj, 30 - 6, 10 - 8 + 2 * 50 - 3);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &shutong);
    lv_obj_set_pos(temp_obj, 30 - 6, 10 - 8 + 3 * 50 - 4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &eco_green);
    lv_obj_set_pos(temp_obj, 30 + 1, 10 + 4 * 50 - 6);
    lv_img_set_zoom(temp_obj, 200);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &bump_oil);
    lv_obj_set_pos(temp_obj, 30 + 1, 10 + 5 * 50 - 10);
    lv_img_set_zoom(temp_obj, 180);

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 80, 10 + 0 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    lv_label_set_text(temp_obj, "排量档位");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 80, 10 + 1 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    lv_label_set_text(temp_obj, "水冷");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 80, 10 + 2 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    lv_label_set_text(temp_obj, "强力");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 80, 10 + 3 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    lv_label_set_text(temp_obj, "疏通");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 80, 10 + 4 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    lv_label_set_text(temp_obj, "节能");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 80, 10 + 5 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    lv_label_set_text(temp_obj, "泵送油温");

    // 第二列
    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &duguan);
    lv_obj_set_pos(temp_obj, 570 + 1, 10 + 8 - 4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &liao_3);
    lv_obj_set_pos(temp_obj, 570, 10 - 10 + 1 * 50 - 4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &liao_1);
    lv_obj_set_pos(temp_obj, 570, 10 - 10 + 2 * 50 - 4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &liao_2);
    lv_obj_set_pos(temp_obj, 570, 10 - 10 + 3 * 50 - 4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &arm_oil);
    lv_obj_set_pos(temp_obj, 570 - 2, 10 - 10 + 4 * 50 - 5);
    lv_img_set_zoom(temp_obj, 180);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &img_arm_lock);
    lv_obj_set_pos(temp_obj, 570 - 20, 10 + 5 * 50 - 14);
    lv_img_set_zoom(temp_obj, 200);

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 620, 10 + 0 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    language_set_current_label(temp_obj, "label_14");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 620, 10 + 1 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    language_set_current_label(temp_obj, "label_15");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 620, 10 + 2 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    language_set_current_label(temp_obj, "label_16");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 620, 10 + 3 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    language_set_current_label(temp_obj, "label_17");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 620, 10 + 4 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    language_set_current_label(temp_obj, "label_18");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 620, 10 + 5 * 50);
    lv_obj_add_style(temp_obj, &style02, 0);
    language_set_current_label(temp_obj, "label_19");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj, 630, 360);
    lv_obj_add_style(temp_obj, &style02, 0);
    language_set_current_label(temp_obj, "R_016ZNV2B.1");

    lv_subject_add_observer_obj(&subject_note_all, note_observer_list_cb, page, NULL);
    return obj;
}

void note_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject)
{
    //语言
    lv_subject_t *s = lv_subject_get_group_element(subject,0);
    int nLang = lv_subject_get_int(s) ;
    language_set_current_lang(nLang);
    language_change_callback();
}
