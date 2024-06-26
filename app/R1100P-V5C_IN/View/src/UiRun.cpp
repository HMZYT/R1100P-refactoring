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
#include "../res/fonts/language_control.h"

static void page_manage_subjects_init();
static void system_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);

lv_subject_t subject_system;
lv_subject_t subject_header;
lv_subject_t subject_footer;
lv_subject_t subject_home_all;
lv_subject_t subject_rc_all;
lv_subject_t subject_faults_all;
lv_subject_t subject_antipping_all;
lv_subject_t subject_factory_all;
lv_subject_t subject_note_all;

irc_lcd_widget_t working_widget;
PAGE working_home_page;
ModeManage modeManage = ModeManage(&working_widget, working_widget_init);
PageManage pageManage = PageManage(&working_home_page, working_page_home_init);

void uiRun()
{
    //观察者初始化
    uiSubjects.uiSubjectsInit();

    //创建窗口
    rc_lcd_mode_t modeIndex = e_rc_lcd_working;
    int  pageIndex = working_page_note;

    irc_lcd_widget_t idle_widget;
    irc_lcd_widget_t factory_widget;
    irc_lcd_widget_t offChargint_widget;
    irc_lcd_widget_t prepared_widget;
    modeManage.mode_manage_add_widget(&working_widget, working_widget_init);
    modeManage.mode_manage_add_widget(&factory_widget, rc_lcd_factory_widget_init);
    modeManage.mode_manage_add_widget(&offChargint_widget, rc_lcd_off_charging_widget_init);
    modeManage.mode_manage_add_widget(&prepared_widget, prepared_widget_init);

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

    //观察者初始化
    page_manage_subjects_init();
    lv_subject_add_observer_obj(&subject_system, system_observer_list_cb, NULL, NULL);

//    lv_obj_t *temp_widget = modeManage.mode_manage_switch_widget(e_rc_lcd_working);//选择模式
//    pageManage.page_manage_switch_page(working_page_note,temp_widget);

#pragma region test
    lv_subject_t* subjectParas = getSubjectsParasWrapper();
    lv_subject_set_int(&subjectParas[system_paras_language], 0);
    lv_subject_set_int(&subjectParas[system_paras_page], working_page_home);
#pragma endregion test
}

static void page_manage_subjects_init()
{
    lv_subject_t* subjectParas = getSubjectsParasWrapper();
    static lv_subject_t *system_list[system_end];
    static lv_subject_t *home_list[machine_end - system_end - 1];
    static lv_subject_t *rc_list[rc_end - machine_end - 1];
    static lv_subject_t *faults_list[faults_end - rc_end - 1];
    static lv_subject_t *antipping_list[antipping_end - faults_end - 1];
    static lv_subject_t *note_list[4];
    static lv_subject_t *factory_list[factory_align_end - antipping_end - 1];
    static lv_subject_t *header_list[9];
    //static lv_subject_t *footer_list[];

    for(int nIndex = 0; nIndex < system_end; nIndex++)
        system_list[nIndex] = &subjectParas[system_paras_language + nIndex];
    lv_subject_init_group(&subject_system, system_list, system_end);

    for(int nIndex = 0; nIndex < machine_end - system_end - 1; nIndex++)
        home_list[nIndex] = &subjectParas[machine_motor_speed + nIndex];
    lv_subject_init_group(&subject_home_all, home_list, machine_end - system_end - 1);

    for(int nIndex = 0; nIndex < rc_end - machine_end - 1; nIndex++)
        rc_list[nIndex] = &subjectParas[rc_armSupport + nIndex];
    lv_subject_init_group(&subject_rc_all, rc_list, rc_end - machine_end - 1);

    for(int nIndex = 0; nIndex < faults_end - rc_end - 1; nIndex++)
        faults_list[nIndex] = &subjectParas[faults_id + nIndex];
    lv_subject_init_group(&subject_faults_all, faults_list, faults_end - rc_end - 1);

    for(int nIndex = 0; nIndex < antipping_end - faults_end - 1; nIndex++)
        antipping_list[nIndex] = &subjectParas[antipping_collapse_flag + nIndex];
    lv_subject_init_group(&subject_antipping_all, antipping_list, antipping_end - faults_end - 1);

    note_list[0] = &subjectParas[system_paras_screen_lock];
    note_list[1] = &subjectParas[system_paras_language_set];
    note_list[2] = &subjectParas[system_paras_power_key];
    note_list[3] = &subjectParas[system_paras_language];
    lv_subject_init_group(&subject_note_all, note_list, 4);

    for(int nIndex = 0; nIndex < factory_align_end - antipping_end - 1; nIndex++)
        factory_list[nIndex] = &subjectParas[factory_align_disp_min + nIndex];
    lv_subject_init_group(&subject_factory_all, factory_list, factory_align_end - antipping_end - 1);

#pragma region 页头
    header_list[0] = &subjectParas[rc_horn];
    header_list[1] = &subjectParas[header_wireless_level];
    header_list[2] = &subjectParas[header_wireless];
    header_list[3] = &subjectParas[rc_connected];
    header_list[4] = &subjectParas[machine_fault_total];
    header_list[5] = &subjectParas[header_title_type];
    header_list[6] = &subjectParas[header_bat_level];
    header_list[7] = &subjectParas[header_bat_charging];
    header_list[8] = &subjectParas[header_rf_channel];
    lv_subject_init_group(&subject_header, header_list, 9);
#pragma endregion 页头

#pragma region 页尾

#pragma endregion 页尾
}

static void system_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject)
{
#pragma region 语言
    temp_value_t temp_v = lv_subject_get_int_from_type(subject, system_paras_language, 0, pageid_system);
    if (temp_v.different_flag)
    {
        language_set_current_lang(temp_v.current_value);
        language_change_callback();
    }
#pragma endregion 语言

#pragma region 模式
    temp_v = lv_subject_get_int_from_type(subject, system_paras_mode, 0, pageid_system);
    lv_obj_t *temp_widget = modeManage.mode_manage_switch_widget(temp_v.current_value);//选择模式
#pragma endregion 模式

#pragma region 页面
    temp_v = lv_subject_get_int_from_type(subject, system_paras_page, 0, pageid_system);
    language_clear_label_list();
    pageManage.page_manage_switch_page(temp_v.current_value,temp_widget);
#pragma endregion 页面
}