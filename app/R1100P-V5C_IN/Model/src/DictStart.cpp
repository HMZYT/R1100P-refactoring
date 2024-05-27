//
// Created by wpl on 2024/4/24.
//

#include "../inc/DictStart.h"
#include "../../../../extensions/data-types/inc/dt_r1100p_ui_data.h"
#include "../inc/DtR1100PUi.h"
#include "../../View/inc/sysparas_defs.h"
#include "../../View/GUI_APP/language_control.h"

void dictInit()
{
    //绑字典
    dtR1100PUi.dtR1100pDictAdd(system_paras_language, &dt_ui.arm0, 100);
    dtR1100PUi.dtR1100pDictAdd(machine_motor_speed, &dt_ui.arm1, 10);
    //设初值
    dtR1100PUi.setDtInt(machine_motor_speed, 2);
    dtR1100PUi.setDtInt(system_paras_language, 1);

    //lan = dtR1100PUi.getDtInt(system_paras_language);
}