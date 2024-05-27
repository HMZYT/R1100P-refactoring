#ifndef LVGL_SYSPARAS_DEFS_H
#define LVGL_SYSPARAS_DEFS_H

typedef enum {
    //language
    system_paras_language,
    system_end,

#pragma region working_home
    home_motor_speed,               //发动机转速(0-3200)
    home_machine_acc_flag,          //加速标志
    home_machine_dec_flag,          //减速标志
    home_machine_gear,              //排量档位(0-10)
    home_machine_water_temp,        //冷却水温（单位：1℃，偏移：-40，范围：-40~210℃，16#FF表示无效数据）
    home_machine_pump_mode,         //泵送模式推荐（1：强力，2：疏通，3：节能）
    home_machine_oil_pos,           //油位（单位：%）
    home_machine_urea_pos,          //尿素液位（单位：%,数据范围0-100。发送FF表示数据异常，显示屏显示--以表示未识别到尿素液位)
    home_machine_pumping_pressure,  //泵送压(0-32MPa)
    home_machine_cw,                //正泵
    home_machine_ccw,               //反泵
    home_machine_emr,               //应急换向模式(0 关闭 1左主缸 2右主缸 3水箱 4 无传感)
    home_machine_materials,         //料况可泵性状态 0：不显示 1：可泵性好 2：可泵性一般 3：可泵性差
    home_machine_pump_freq,         //泵送频率(单位：次/分钟)
    home_machine_pump_temperature,  //泵送液压油温（单位：0.1℃）
    home_machine_blocking,          //堵管状态(1：正常 2：堵管预警 3：堵管报警)
    home_machine_pressure,          //高低压
    home_machine_fan_manual,        //风机(手动)
    home_machine_fan_auto,          //风机(自动)
    home_machine_fan_close,         //风机(关)
    home_machine_fan_emr,           //风机应急
    home_machine_mixer_cw,          //正搅拌
    home_machine_mixer_ccw,         //反搅拌
    home_machine_mixer_emr,         //搅拌应急
    home_machine_arm0_cw_en,        //顺回转使能
    home_machine_arm1_cw_en,        //1臂展使能
    home_machine_arm2_cw_en,        //2臂展使能
    home_machine_arm3_cw_en,        //3臂展使能
    home_machine_arm4_cw_en,        //4臂展使能
    home_machine_arm5_cw_en,        //5臂展使能
    home_machine_arm0_ccw_en,       //逆回转使能
    home_machine_arm1_ccw_en,       //1臂收使能
    home_machine_arm2_ccw_en,       //2臂收使能
    home_machine_arm3_ccw_en,       //3臂收使能
    home_machine_arm4_ccw_en,       //4臂收使能
    home_machine_arm5_ccw_en,       //5臂收使能
    home_machine_arm0_status,       //回转角度(单位0.1°,有正负)
    home_machine_arm1_status,       //1臂角度(单位0.1°,有正负)
    home_machine_arm2_status,       //2臂角度(单位0.1°,有正负)
    home_machine_arm3_status,       //3臂角度(单位0.1°,有正负)
    home_machine_arm4_status,       //4臂角度(单位0.1°,有正负)
    home_machine_arm5_status,       //5臂角度(单位0.1°,有正负)
    home_machine_support_mode,      //支撑模式(0-无支撑、1-全支撑、2-左支撑、3-右支撑、4-前支撑、5-小支撑 7-左前、8 -右前、100-RPC)
    home_machine_arms_temperature,  //臂架液压油温（单位：0.1℃，有正负）
    home_machine_cw_emr,            //回转应急
    home_machine_support_logo,      //20a,主监控任意支撑功能图标状态与颜色：0-不显示，1-灰色，2-绿色，3-黄色，4-红色
    home_machine_collapse_logo,     //20a,主监控塌陷识别功能图标状态与颜色：0-不显示，1-灰色，2-绿色，3-黄色，4-红色
    home_machine_safe_k,            //安全系数

    home_end,
#pragma endregion

    SUBJECT_COUNTS_PARAS_END
} subject_paras_t;

#endif //LVGL_SYSPARAS_DEFS_H
