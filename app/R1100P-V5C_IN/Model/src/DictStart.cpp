//
// Created by wpl on 2024/4/24.
//

#include "../inc/DictStart.h"
#include "../../../../extensions/data-types/inc/dt_r1100p_ui_data.h"
#include "../inc/DtR1100PUi.h"
#include "../../View/inc/sysparas_defs.h"

void dictInit()
{
    //绑字典
    dtR1100PUi.dtR1100pDictAdd(home_motor_speed, &dt_ui.arm0, 100);			// 百针纱长			C		11.96
    //设初值
    dtR1100PUi.setDtInt(home_motor_speed, 5);
}