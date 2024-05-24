#ifndef DT_R1100P_UI_DATA_H_
#define DT_R1100P_UI_DATA_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    uint8_t arm0;
    uint8_t arm1;
    //遥控器串口数据
} dt_r1100p_ui_t;

extern dt_r1100p_ui_t dt_ui;

extern dt_r1100p_ui_t *dt_r1100p_ui_create(void);

extern void dt_r1100p_ui_data_change_uint( void );

#endif /*  DT_R1100P_UI_DATA_H_ */