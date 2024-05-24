//
// Created by wpl on 2024/4/25.
//
#include "../inc/UiRun.h"
#include "../inc/UiSubjects.h"
#include "../inc/ModeManage.h"
#include "../inc/working_page_antipping.h"
#include "../inc/working_page_home.h"
#include "../inc/working_page_faults.h"
#include "../inc/working_page_rc.h"
#include "../inc/working_page_note.h"
#include "../inc/idle_page_black.h"
#include "../inc/fact_page_version.h"
#include "../inc/fact_page_align.h"
#include "../inc/fact_page_align_displacement.h"
#include "../inc/fact_page_full_color.h"
#include "../inc/fact_page_touch.h"
#include "../inc/off_charging_page_charging.h"
#include "../inc/prepared_page_rc.h"
#include "../../Model/inc/DtR1100PUi.h"
#include "../inc/sysparas_defs.h"
#include "../inc/UiSubjectsWrapper.h"
#include "../GUI_APP/language_control.h"

static void page_manage_subjects_init();
static void system_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);

lv_subject_t subject_system;
lv_subject_t subject_home_all;
lv_subject_t subject_note_all;

void uiRun()
{
    //观察者初始化
    uiSubjects.uiSubjectsInit();

    //创建窗口
    rc_lcd_mode_t modeIndex = e_rc_lcd_working;
    int  pageIndex = working_page_note;

    irc_lcd_widget_t idle_widget;
    irc_lcd_widget_t working_widget;
    irc_lcd_widget_t factory_widget;
    irc_lcd_widget_t offChargint_widget;
    irc_lcd_widget_t prepared_widget;
    ModeManage modeManage(&idle_widget, idle_widget_init);
    modeManage.mode_manage_add_widget(&working_widget, working_widget_init);
    modeManage.mode_manage_add_widget(&factory_widget, rc_lcd_factory_widget_init);
    modeManage.mode_manage_add_widget(&offChargint_widget, rc_lcd_off_charging_widget_init);
    modeManage.mode_manage_add_widget(&prepared_widget, prepared_widget_init);

    PAGE working_home_page;
    PAGE working_antipping_page;
    PAGE working_faults_page;
    PAGE working_rc_page;
    PAGE working_note_page;
    PAGE idle_black_page;
    PAGE fact_version_page;
    PAGE fact_algin_page;
    PAGE fact_algin_displacement_page;
    PAGE fact_page_full_color_page;
    PAGE fact_page_touch_page;
    PAGE off_charging_page;
    PAGE prepared_page;
    PageManage pageManage(&working_home_page, working_page_home_init);
    pageManage.page_manage_add_page(&working_antipping_page, working_page_antipping, working_page_antipping_init);
    pageManage.page_manage_add_page(&working_faults_page, working_page_faults, working_page_faults_init);
    pageManage.page_manage_add_page(&working_rc_page, working_page_rc, working_page_rc_init);
    pageManage.page_manage_add_page(&working_note_page, working_page_note, working_page_note_init);
    pageManage.page_manage_add_page(&idle_black_page, idle_page_black, idle_page_black_init);
    pageManage.page_manage_add_page(&fact_version_page, fact_page_version, fact_page_version_init);
    pageManage.page_manage_add_page(&fact_algin_page, fact_page_algin, fact_page_algin_init);
    pageManage.page_manage_add_page(&fact_algin_displacement_page, fact_page_algin_displacement, fact_page_algin_displacement_init);
    pageManage.page_manage_add_page(&fact_page_full_color_page, fact_page_full_color, fact_page_full_color_init);
    pageManage.page_manage_add_page(&fact_page_touch_page, fact_page_touch, fact_page_touch_init);
    pageManage.page_manage_add_page(&off_charging_page, off_charging_page_charging, off_charging_page_charging_init);
    pageManage.page_manage_add_page(&prepared_page, prepared_page_rc, prepared_page_rc_create);

    lv_obj_t *temp_widget = modeManage.mode_manage_switch_widget(modeIndex);//选择模式

    //观察者初始化
    page_manage_subjects_init();

    pageManage.page_manage_switch_page(pageIndex,temp_widget);
    language_clear_label_list();
    pageManage.page_manage_switch_page(0,temp_widget);
    lv_subject_add_observer_obj(&subject_system, system_observer_list_cb, NULL, NULL);

    lv_subject_t* subjectParas = getSubjectsParasWrapper();
    lv_subject_set_int(&subjectParas[system_paras_language], 1);
}

static void page_manage_subjects_init()
{
    lv_subject_t* subjectParas = getSubjectsParasWrapper();
    static lv_subject_t *system_list[system_end];
    static lv_subject_t *home_list[home_end - system_end - 1];
    //lv_subject_t *note_list[1];

    system_list[0] = &subjectParas[system_paras_language];
    lv_subject_init_group(&subject_system, system_list, system_end);

    home_list[0] = &subjectParas[home_motor_speed];
    lv_subject_init_group(&subject_home_all, home_list, home_end - system_end - 1);

//  note_list[0] = &subjectParas[system_paras_language];
//  lv_subject_init_group(subject, note_list, 1);
}

static void system_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject)
{
    lv_subject_t *s = lv_subject_get_group_element(subject, 0);
    int lang = lv_subject_get_int(s);
    language_set_current_lang(lang);
    language_change_callback();
}