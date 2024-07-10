#include "../inc/UiSubjects.h"

#include "../../../../../extensions/data-types/inc/dt_r1100p_ui_data.h"
#include "../inc/sysparas_defs.h"
#include "../../../Model/inc/DtR1100PUi.h"

UiSubjects::UiSubjects()
{
}

UiSubjects::~UiSubjects()
{
}

void UiSubjects::uiSubjectsInit()
{
    working_machine_space *machine_data = (working_machine_space *)dtR1100PUi.getDtIntAdress(machine_data_space);
    working_rc_space *rc_data = (working_rc_space *)dtR1100PUi.getDtIntAdress(rc_data_space);

    uiSubjects.paras = (lv_subject_t*) lv_malloc(sizeof(lv_subject_t) * SUBJECT_COUNTS_PARAS_END);
    //系统参数
    lv_subject_init_int(&paras[system_paras_language], dtR1100PUi.getDtInt( system_paras_language));
    lv_subject_init_int(&paras[system_paras_mode], dtR1100PUi.getDtInt( system_paras_mode));
    lv_subject_init_int(&paras[system_paras_page], dtR1100PUi.getDtInt( system_paras_page));

    //machine
    lv_subject_init_int(&paras[machine_motor_speed], dtR1100PUi.getDtInt( machine_motor_speed));
    lv_subject_init_int(&paras[machine_gear], dtR1100PUi.getDtInt( machine_gear));
    lv_subject_init_int(&paras[machine_water_temp], dtR1100PUi.getDtInt( machine_water_temp));
    lv_subject_init_int(&paras[machine_pump_mode], dtR1100PUi.getDtInt( machine_pump_mode));
    lv_subject_init_int(&paras[machine_oil_pos], dtR1100PUi.getDtInt( machine_oil_pos));
    lv_subject_init_int(&paras[machine_urea_pos], dtR1100PUi.getDtInt( machine_urea_pos));
    lv_subject_init_int(&paras[machine_pumping_pressure], dtR1100PUi.getDtInt( machine_pumping_pressure));
    lv_subject_init_int(&paras[machine_emr], dtR1100PUi.getDtInt( machine_emr));
    lv_subject_init_int(&paras[machine_materials], dtR1100PUi.getDtInt( machine_materials));
    lv_subject_init_int(&paras[machine_pump_freq], dtR1100PUi.getDtInt( machine_pump_freq));
    lv_subject_init_int(&paras[machine_pump_temperature], dtR1100PUi.getDtInt( machine_pump_temperature));
    lv_subject_init_int(&paras[machine_blocking], dtR1100PUi.getDtInt( machine_blocking));
    lv_subject_init_int(&paras[machine_arm0_status], dtR1100PUi.getDtInt( machine_arm0_status));
    lv_subject_init_int(&paras[machine_arm1_status], dtR1100PUi.getDtInt( machine_arm1_status));
    lv_subject_init_int(&paras[machine_arm2_status], dtR1100PUi.getDtInt( machine_arm2_status));
    lv_subject_init_int(&paras[machine_arm3_status], dtR1100PUi.getDtInt( machine_arm3_status));
    lv_subject_init_int(&paras[machine_arm4_status], dtR1100PUi.getDtInt( machine_arm4_status));
    lv_subject_init_int(&paras[machine_arm5_status], dtR1100PUi.getDtInt( machine_arm5_status));
    lv_subject_init_int(&paras[machine_support_mode], dtR1100PUi.getDtInt( machine_support_mode));
    lv_subject_init_int(&paras[machine_arms_temperature], dtR1100PUi.getDtInt( machine_arms_temperature));
    lv_subject_init_int(&paras[machine_support_logo], dtR1100PUi.getDtInt( machine_support_logo));
    lv_subject_init_int(&paras[machine_collapse_logo], dtR1100PUi.getDtInt( machine_collapse_logo));
    lv_subject_init_int(&paras[machine_safe_k], dtR1100PUi.getDtInt( machine_safe_k));
    lv_subject_init_int(&paras[machine_safe_k], dtR1100PUi.getDtInt( machine_safe_k));

    lv_subject_init_int(&paras[machine_acc_flag], machine_data->acc_flag);
    lv_subject_init_int(&paras[machine_dec_flag], machine_data->dec_flag);
    lv_subject_init_int(&paras[machine_cw],  machine_data->cw);
    lv_subject_init_int(&paras[machine_ccw],  machine_data->ccw);
    lv_subject_init_int(&paras[machine_pressure],  machine_data->pressure);
    lv_subject_init_int(&paras[machine_fan_manual],  machine_data->fan_manual);
    lv_subject_init_int(&paras[machine_fan_auto],  machine_data->fan_auto);
    lv_subject_init_int(&paras[machine_fan_close],  machine_data->fan_close);
    lv_subject_init_int(&paras[machine_fan_emr],  machine_data->fan_emr);
    lv_subject_init_int(&paras[machine_mixer_cw],  machine_data->mixer_cw);
    lv_subject_init_int(&paras[machine_mixer_ccw],  machine_data->mixer_ccw);
    lv_subject_init_int(&paras[machine_mixer_emr],  machine_data->mixer_emr);
    lv_subject_init_int(&paras[machine_arm0_cw_en],  machine_data->arm0_cw_en);
    lv_subject_init_int(&paras[machine_arm1_cw_en],  machine_data->arm1_cw_en);
    lv_subject_init_int(&paras[machine_arm2_cw_en],  machine_data->arm2_cw_en);
    lv_subject_init_int(&paras[machine_arm3_cw_en],  machine_data->arm3_cw_en);
    lv_subject_init_int(&paras[machine_arm4_cw_en],  machine_data->arm4_cw_en);
    lv_subject_init_int(&paras[machine_arm5_cw_en],  machine_data->arm5_cw_en);
    lv_subject_init_int(&paras[machine_arm0_ccw_en],  machine_data->arm0_ccw_en);
    lv_subject_init_int(&paras[machine_arm1_ccw_en],  machine_data->arm1_ccw_en);
    lv_subject_init_int(&paras[machine_arm2_ccw_en],  machine_data->arm2_ccw_en);
    lv_subject_init_int(&paras[machine_arm3_ccw_en],  machine_data->arm3_ccw_en);
    lv_subject_init_int(&paras[machine_arm4_ccw_en],  machine_data->arm4_ccw_en);
    lv_subject_init_int(&paras[machine_arm5_ccw_en],  machine_data->arm5_ccw_en);
    lv_subject_init_int(&paras[machine_cw_emr],  machine_data->cw_emr);

    //rc
    lv_subject_init_int(&paras[rc_armSupport], dtR1100PUi.getDtInt( rc_armSupport));
    lv_subject_init_int(&paras[rc_arm1], dtR1100PUi.getDtInt( rc_arm1));
    lv_subject_init_int(&paras[rc_arm2], dtR1100PUi.getDtInt( rc_arm2));
    lv_subject_init_int(&paras[rc_arm3], dtR1100PUi.getDtInt( rc_arm3));
    lv_subject_init_int(&paras[rc_arm4], dtR1100PUi.getDtInt( rc_arm4));
    lv_subject_init_int(&paras[rc_arm5], dtR1100PUi.getDtInt( rc_arm5));
    lv_subject_init_int(&paras[rc_displacement], dtR1100PUi.getDtInt( rc_displacement));
    lv_subject_init_int(&paras[rc_halt], dtR1100PUi.getDtInt( rc_halt));
    lv_subject_init_int(&paras[rc_data_space], dtR1100PUi.getDtInt( rc_data_space));

    lv_subject_init_int(&paras[rc_1], rc_data->_1);
    lv_subject_init_int(&paras[rc_1_2], rc_data->_1_2);
    lv_subject_init_int(&paras[rc_1_2_3], rc_data->_1_2_3);
    lv_subject_init_int(&paras[rc_2], rc_data->_2);
    lv_subject_init_int(&paras[rc_3], rc_data->_3);
    lv_subject_init_int(&paras[rc_2_3], rc_data->_2_3);
    lv_subject_init_int(&paras[rc_engine_stop], rc_data->engine_stop);
    lv_subject_init_int(&paras[rc_start_key], rc_data->start_key);
    lv_subject_init_int(&paras[rc_horn], rc_data->horn);
    lv_subject_init_int(&paras[rc_ccw], rc_data->ccw);
    lv_subject_init_int(&paras[rc_cw], rc_data->cw);
    lv_subject_init_int(&paras[rc_right_swing_pump], rc_data->right_swing_pump);
    lv_subject_init_int(&paras[rc_left_swing_pump], rc_data->left_swing_pump);
    lv_subject_init_int(&paras[rc_slow], rc_data->slow);
    lv_subject_init_int(&paras[rc_rpm_minus], rc_data->rpm_minus);
    lv_subject_init_int(&paras[rc_rpm_plus], rc_data->rpm_plus);
    lv_subject_init_int(&paras[rc_dredge], rc_data->dredge);
    lv_subject_init_int(&paras[rc_strong_power], rc_data->strong_power);
    lv_subject_init_int(&paras[rc_powerkey], rc_data->powerkey);
    lv_subject_init_int(&paras[rc_flag],0 );

    //faults
    lv_subject_init_int(&paras[faults_id], dtR1100PUi.getDtInt( faults_id));
    lv_subject_init_int(&paras[faults_detail], dtR1100PUi.getDtInt( faults_detail));
    lv_subject_init_int(&paras[faults_total], dtR1100PUi.getDtInt( faults_total));

    //antipping
    lv_subject_init_int(&paras[antipping_collapse_flag], dtR1100PUi.getDtInt( antipping_collapse_flag));
    lv_subject_init_int(&paras[antipping_alarm_flag], dtR1100PUi.getDtInt( antipping_alarm_flag));
    lv_subject_init_int(&paras[antipping_limit_flag], dtR1100PUi.getDtInt( antipping_limit_flag));
    lv_subject_init_int(&paras[antipping_leg_left_up_level], dtR1100PUi.getDtInt( antipping_leg_left_up_level));
    lv_subject_init_int(&paras[antipping_leg_right_up_level], dtR1100PUi.getDtInt( antipping_leg_right_up_level));
    lv_subject_init_int(&paras[antipping_leg_left_down_level], dtR1100PUi.getDtInt( antipping_leg_left_down_level));
    lv_subject_init_int(&paras[antipping_leg_right_down_level], dtR1100PUi.getDtInt( antipping_leg_right_down_level));
    lv_subject_init_int(&paras[antipping_leg_left_up_collapse], dtR1100PUi.getDtInt( antipping_leg_left_up_collapse));
    lv_subject_init_int(&paras[antipping_leg_left_down_collapse], dtR1100PUi.getDtInt( antipping_leg_left_down_collapse));
    lv_subject_init_int(&paras[antipping_leg_right_up_collapse], dtR1100PUi.getDtInt( antipping_leg_right_up_collapse));
    lv_subject_init_int(&paras[antipping_leg_right_down_collapse], dtR1100PUi.getDtInt( antipping_leg_right_down_collapse));
    lv_subject_init_int(&paras[antipping_up_dis], dtR1100PUi.getDtInt( antipping_up_dis));
    lv_subject_init_int(&paras[antipping_down_dis], dtR1100PUi.getDtInt( antipping_down_dis));
    lv_subject_init_int(&paras[antipping_left_dis], dtR1100PUi.getDtInt( antipping_left_dis));
    lv_subject_init_int(&paras[antipping_right_dis], dtR1100PUi.getDtInt( antipping_right_dis));
    lv_subject_init_int(&paras[antipping_danger_edge], dtR1100PUi.getDtInt( antipping_danger_edge));
    lv_subject_init_int(&paras[antipping_support_mode], dtR1100PUi.getDtInt( antipping_support_mode));
    lv_subject_init_int(&paras[antipping_leg_left_up], dtR1100PUi.getDtInt( antipping_leg_left_up));
    lv_subject_init_int(&paras[antipping_leg_left_down], dtR1100PUi.getDtInt( antipping_leg_left_down));
    lv_subject_init_int(&paras[antipping_leg_right_up], dtR1100PUi.getDtInt( antipping_leg_right_up));
    lv_subject_init_int(&paras[antipping_leg_right_down], dtR1100PUi.getDtInt( antipping_leg_right_down));
    lv_subject_init_int(&paras[antipping_leg_not_open], dtR1100PUi.getDtInt( antipping_leg_not_open));
    lv_subject_init_int(&paras[antipping_arm0_status], dtR1100PUi.getDtInt( antipping_arm0_status));
    lv_subject_init_int(&paras[antipping_safe_k], dtR1100PUi.getDtInt( antipping_safe_k));

    //factory
    lv_subject_init_int(&paras[factory_align_disp_min], dtR1100PUi.getDtInt( factory_align_disp_min));
    lv_subject_init_int(&paras[factory_align_disp_mid], dtR1100PUi.getDtInt( factory_align_disp_mid));
    lv_subject_init_int(&paras[factory_align_disp_max], dtR1100PUi.getDtInt( factory_align_disp_max));
    lv_subject_init_int(&paras[factory_align_disp_selected_pos], dtR1100PUi.getDtInt( factory_align_disp_selected_pos));
    lv_subject_init_int(&paras[factory_align_displacement_end], dtR1100PUi.getDtInt( factory_align_displacement_end));
    lv_subject_init_int(&paras[factory_align_selected_cali_arm], dtR1100PUi.getDtInt( factory_align_selected_cali_arm));
    lv_subject_init_int(&paras[factory_align_min_arr], dtR1100PUi.getDtInt( factory_align_min_arr));
    lv_subject_init_int(&paras[factory_align_mid_arr], dtR1100PUi.getDtInt( factory_align_mid_arr));
    lv_subject_init_int(&paras[factory_align_max_arr], dtR1100PUi.getDtInt( factory_align_max_arr));
    lv_subject_init_int(&paras[factory_align_selected_pos], dtR1100PUi.getDtInt( factory_align_selected_pos));

}

lv_subject_t* UiSubjects::getSubjectsParas()
{
    return paras;
}

UiSubjects uiSubjects;
