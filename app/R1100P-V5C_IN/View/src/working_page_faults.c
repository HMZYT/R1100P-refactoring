#include "../inc/working_page_faults.h"
#include <stdlib.h>
#include <stdio.h>


/// @brief 00：遥控器独立判断故障
static const char* _errs_00_0[] = {  
    "0",
};

static const char* _errs_00_1[] = {  
    "0",
};

static const char* _errs_00_2[] = {  
    "0",
};

static const char* _errs_00_3[] = {  
    "遥控器与控制器通信故障",
    "遥控器泵送开关未复位",
    "0",
    "遥控器一键布料/展收开关未复位",
};



/// @brief 01：电源/硬件
static const char* _errs_01_0[] = {  
    "0",
};

static const char* _errs_01_1[] = {  
    "0",
    "蓄电池电压低",
};

static const char* _errs_01_2[] = {  
    "0",
    "控制器温度高",
};

static const char* _errs_01_3[] = {  
    "0",
    "控制器电源VBBr故障-无输出",
    "控制器电源VBBo故障-无输出",
    "控制器总电源VBBRel故障-无输出",
    "控制器电源VBB1故障-无输出",
    "控制器电源VBB2故障-无输出",
    "控制器电源VBB3故障-无输出",
    "控制器电源VBB4故障-无输出",
    "控制器电源VBB1故障-无输出",
    "控制器电源VBB2故障-无输出",
    "控制器电源VBB3故障-无输出",
    "控制器电源VBB4故障-无输出",
    "控制器电源VBB5故障-无输出",
    "控制器电源VBB6故障-无输出",
    "控制器电源VBB7故障-无输出",
    "控制器电源VBB8故障-无输出",

};


/// @brief 02：控制器输入
static const char* _errs_02_0[] = {  
    "0",
};

static const char* _errs_02_1[] = {  
    "0",
};

static const char* _errs_02_2[] = {  
    "0",
    "液位传感器故障",
};

static const char* _errs_02_3[] = {  
    "0",
    "泵送压力1传感器故障",
    "泵送压力2传感器故障",
    "分配压力传感器故障",
    "泵送油温传感器故障",
    "臂架油温传感器故障",
    "左位移传感器故障",
    "右位移传感器故障",
    "2臂无杆腔压力传感器故障",
    "2臂有杆腔压力传感器故障",
    "3臂无杆腔压力传感器故障",
    "3臂有杆腔压力传感器故障",
    "4臂无杆腔压力传感器故障",
    "4臂有杆腔压力传感器故障",
    "臂架压力传感器故障",
    "编码器接近开关A信号丢失",
    "编码器接近开关B信号丢失",
    "编码器接近开关AB信号丢失",
};

/// @brief 03：控制器输出
static const char* _errs_03_0[] = {  
    "0",
};

static const char* _errs_03_1[] = {  
    "0",
};

static const char* _errs_03_2[] = {  
    "0",
    "清洗阀故障",
    "泄油阀故障",
    "补油阀故障",
    "正搅拌阀故障",
    "反搅拌阀故障",
    "主泵降温阀故障",
    "润滑阀故障",
    "快换活塞阀故障",
    "2臂展减振电磁阀故障",
    "2臂收减振电磁阀故障",
    "3臂展减振电磁阀故障",
    "3臂收减振电磁阀故障",
    "4臂展减振电磁阀故障",
    "4臂收减振电磁阀故障",
};

static const char* _errs_03_3[] = {  
    "0",
    "主泵1排量阀故障",
    "主泵2排量阀故障",
    "高压阀故障",
    "低压阀故障",
    "恒压泵排量阀故障",
    "合流阀/减振阀故障",
    "摆缸阀1故障",
    "摆缸阀2故障",
    "左主缸阀1故障",
    "右主缸阀1故障",
    "左主缸阀2故障",
    "右主缸阀2故障",
    "顺回转阀故障",
    "逆回转阀故障",
    "1臂展多路阀故障",
    "1臂收多路阀故障",
    "2臂展多路阀故障",
    "2臂收多路阀故障",
    "3臂展多路阀故障",
    "3臂收多路阀故障",
    "4臂展多路阀故障",
    "4臂收多路阀故障",
    "5臂展多路阀故障",
    "5臂收多路阀故障",
    "6臂展多路阀故障",
    "6臂收多路阀故障",
    "7臂展多路阀故障",
    "7臂收多路阀故障",
    "支腿阀故障",
    "臂架卸荷阀故障",
    "回转比例阀故障",
    "电控冲洗阀故障",
    "泵送卸荷阀故障",
    "补泄油选择阀故障",
    "溢流阀故障",
};

/// @brief 04：总线/通信

static const char* _errs_04_0[] = {  
    "0",
};
static const char* _errs_04_1[] = {  
    "0",
    "显示屏通信故障",
};

static const char* _errs_04_2[] = {  
    "0",
    "左前腿开度传感器故障",
    "右前腿开度传感器故障",
    "左后腿开度传感器故障",
    "右后腿开度传感器故障",
    "车身倾角传感器故障",
    "电机控制器通信故障",
    "BMS通信故障",
    "DCDC通信故障",
    "输送管集中器通信故障",
};

static const char* _errs_04_3[] = {  
    "0",
    "主从控制器通信故障",
    "遥控器关闭/通信故障",
    "GPS通信故障",
    "底盘通信故障",
    "I/O板通信故障",
    "1臂倾角通信故障",
    "2臂倾角通信故障",
    "3臂倾角通信故障",
    "4臂倾角通信故障",
    "5臂倾角通信故障",
    "6臂倾角通信故障",
    "7臂倾角通信故障",
    "多路阀通信故障",
    "回转编码器通信故障",
    "支撑面板通信故障",
    "回转编码器通信故障（从）",
    "1臂倾角通信故障（从）",
    "2臂倾角通信故障（从）",
    "3臂倾角通信故障（从）",
    "4臂倾角通信故障（从）",
    "5臂倾角通信故障（从）",
    "6臂倾角通信故障（从）",
    "7臂倾角通信故障（从）",
    "工控机通信故障",
    "1臂雷达通信故障",
    "2臂雷达通信故障",
    "3臂雷达通信故障",
    "4臂雷达通信故障",
    "5臂雷达通信故障",
    "6臂雷达通信故障",
    "扩展IO模块通信故障",
    "防碰撞工控机通信故障",
};

/// @brief 05：GPS/锁车
static const char* _errs_05_0[] = {  
    "0",
};
static const char* _errs_05_1[] = {  
    "0",
};

static const char* _errs_05_2[] = {  
    "0",
    "1120报警",
};

static const char* _errs_05_3[] = {  
    "0",
    "1120报警-限排量",
    "1130报警-停正泵",
    "1130报警-停发动机",
    "一级锁车",
    "未连接到基站",
    "未连接到平台",
    "GPS读卡故障",
    "GPS拨号故障",
    "GPS通信模块损坏",
};

/// @brief 06：泵送
static const char* _errs_06_0[] = {  
    "0",
    "料况差",
};

static const char* _errs_06_1[] = {  
    "0",
    "首次保养报警",
    "后续保养报警",
};

static const char* _errs_06_2[] = {  
    "0",
    "泵送超压-限排量",
    "泵送油箱液位低",
    "泵送油温高",
    "首保提醒-限排量",
    "未正确还原参数-限排量",
};

static const char* _errs_06_3[] = {  
    "0",
    "泵送油温高-停正泵",
    "泵送超压-停正泵",
    "优化行程报警-行程异常",
    "料位低-停正泵",
    "面遥切换-停泵送",
    "快换活塞-停正泵",
    "堵管预警",
    "堵管报警",
    "臂架油温高-停正泵",
    "急停按钮按下-停上装功能",
    "空气截止阀打开-停止泵",
};


/// @brief 07：臂架/支腿
static const char* _errs_07_0[] = {  
    "0",
    "未选择支撑方式",
    "支撑方式错误",
    "违规操作支腿",
    "前支腿防干涉-限1臂收和回转",
    "后支腿防干涉-限1臂收和回转",
    "臂架与驾驶室防干涉-限1臂收",
    "臂架与驾驶室防干涉-限逆回转",
    "臂架与驾驶室防干涉-限顺回转",
    "前支撑回转安全角度超限",
    "小支撑1臂小于安全角度",
    "小支撑2臂小于安全角度",
    "小支撑1臂大于安全角度",
    "小支撑2臂大于安全角度",
    "两级腿支撑1臂小于安全角度",
    "全支撑-限顺回转",
    "全支撑-限逆回转",
    "左支撑-限逆回转",
    "左支撑-限顺回转",
    "右支撑-限顺回转",
    "右支撑-限逆回转",
    "前支撑-限顺回转",
    "前支撑-限逆回转",
    "前支撑-限逆回转",
    "前支撑-限顺回转",
    "小支撑-限顺回转",
    "小支撑-限逆回转",
    "小支撑-限回转",
    "左前支撑-限逆回转",
    "左前支撑-限顺回转",
    "右前支撑-限顺回转",
    "右前支撑-限逆回转",
    "两级腿支撑-限顺回转",
    "两级腿支撑-限逆回转",
    "两级腿支撑-限回转",
    "一级腿支撑-限顺回转",
    "一级腿支撑-限逆回转",
    "一级腿支撑-限回转",
    "遥控器锁1臂",
    "遥控器锁2臂",
    "遥控器锁3臂",
    "遥控器锁1+2臂",
    "遥控器锁2+3臂",
    "遥控器锁1+2+3臂",
    "一级腿支撑1臂小于安全角度",
};

static const char* _errs_07_1[] = {  
    "0",
    "臂架油箱液位低",
};

static const char* _errs_07_2[] = {  
    "0",
    "臂架油温高",
    "2臂减振阀卡滞",
    "3臂减振阀卡滞",
    "4臂减振阀卡滞",
    "两级腿支撑失效",
};

static const char* _errs_07_3[] = {  
    "0",
    "未设置臂架类型",
    "臂架油温高-锁臂",
    "编码器故障",
    "回转多路阀未激活",
    "1臂多路阀未激活",
    "2臂多路阀未激活",
    "3臂多路阀未激活",
    "4臂多路阀未激活",
    "5臂多路阀未激活",
    "6臂多路阀未激活",
    "后方布料防干涉-停正泵",
    "4臂油缸超载-停正泵",
    "4臂与支撑座干涉风险",
    "回转角度异常",
};

/// @brief 08：动力/发动机
static const char* _errs_08_0[] = {  
    "0",
    "远程启动发动机禁用",
};

static const char* _errs_08_1[] = {  
    "0",
    "燃油液位低",
    "尿素液位低",
};

static const char* _errs_08_2[] = {  
    "0",
    "机油压力报警",
    "冷却液超温报警",
};

static const char* _errs_08_3[] = {  
    "0",
    "未设置底盘",
    "底盘超档位-停泵送",
    "油泵超速-停发动机",
    "底盘倒档-停发动机",
    "急停按钮按下-停发动机",
    "分动箱故障-停发动机",
    "液压系统排水提示-限转速",
    "吸油截止阀-停发动机",
    "发动机限扭",
    "发动机故障",
};

/// @brief 09：动力/新能源
static const char* _errs_09_0[] = {  
    "0",
};

static const char* _errs_09_1[] = {  
    "0",
    "BMS 一级故障",
    "放电总压低1级",
    "放电单体低1级",
    "放电总压高1级",
    "回馈单体高1级",
    "放电高温1级",
    "充电总压高1级",
    "充电单体高1级",
    "充电总压低1级",
    "充电单体低1级",
    "充电高温1级",
    "绝缘漏电故障1级",
    "SOC过低1级",
    "瞬时放电过流1级",
    "充电单体压差1级",
    "充电低温1级",
    "充电温差1级",
    "SOC跳变",
    "放电单体压差",
    "放电低温1级",
    "放电温差",
    "电机  一级故障",
    "电机控制器相电流过流 1级",
    "电机控制器逆变器过温 1级",
    "电机控制器母线欠压 1 级",
    "电机过温 1级",
    "电机控制器母线过压 1 级",
    "电机超速 1级",
    "电机温度传感器掉线",
    "电机过载",
    "DCDC 一级故障",
    "DCDC 输入过压",
    "DCDC 输入欠压",
    "DCDC 过温告警",
    "离合器故障",
    "底盘气压低",
    "SOC低报警",
    "电机负载高",
};

static const char* _errs_09_2[] = {  
    "0",
    "BMS 二级故障",
    "放电总压低2级",
    "放电单体低2级",
    "放电总压高2级",
    "回馈单体高2级",
    "放电高温2级",
    "充电总压高2级",
    "充电单体高2级",
    "充电总压低2级",
    "充电单体低2级",
    "充电高温2级",
    "绝缘漏电故障2级",
    "SOC过低2级",
    "充电过流2级",
    "持续放电过流2级",
    "回馈过流2级",
    "电压排线脱落2级",
    "温感排线脱落2级",
    "SOC不准2级",
    "电机二级故障",
    "电机控制器母线欠压2级",
    "电机过温2级",
    "电机控制器过温2级",
    "电机控制器母线过压2级",
    "电机超速2级",
    "电机控制器IGBT温度异常2级",
    "DCDC 二级故障",
};

static const char* _errs_09_3[] = {
    "0",
    "BMS 三级故障",
    "放电总压低3级",
    "放电单体低3级",
    "放电总压高3级",
    "回馈单体高3级",
    "放电高温3级",
    "充电总压高3级",
    "充电单体高3级",
    "充电总压低3级",
    "充电单体低3级",
    "充电高温3级",
    "绝缘漏电故障3级",
    "SOC过低3级",
    "充电过流3级",
    "瞬时放电过流3级",
    "持续放电过流3级",
    "回馈过流3级",
    "电压排线脱落3级",
    "温感排线脱落3级",
    "内网通信故障3级",
    "快充插座高温3级（直流+）",
    "快充插座高温3级（直流-）",
    "充电插座温感异常3级",
    "充电机通信故障3级",
    "整车通信故障3级",
    "预充失败3级",
    "电流异常3级",
    "BMS初始化故障3级",
    "高压互锁故障3级",
    "正极继电器粘连3级",
    "正极继电器开路3级",
    "负极继电器粘连",
    "负极继电器开路",
    "充电正继电器粘连",
    "充电正继电器开路",
    "充电负继电器粘连",
    "充电负继电器开路",
    "加热继电器粘连",
    "加热继电器开路",
    "加热故障",
    "低压电源异常",
    "热失控故障",
    "电机  三级故障",
    "电机控制器逆变器硬件检测故障",
    "电机控制器IGBT 硬件故障",
    "电机控制器can 通信故障",
    "电机堵转 ",
    "电机控制器模块故障",
    "电机旋变硬件故障",
    "电机控制器驱动欠压",
    "电机控制器24V 欠压",
    "电机控制器编码器异常",
    "电机控制器输出缺相",
    "电机控制器电流检测异常",
    "电机控制器短路过流报警",
    "电机控制器相电流过流  3级",
    "电机控制器软件检测过流",
    "电机控制器逆变器过温 3级",
    "电机控制器母线欠压  3级",
    "电机过温  3级",
    "电机控制器过温  3级",
    "电机控制器母线过压 3级",
    "电机超速 3级",
    "DCDC 三级故障",
    "DCDC 输出过压",
    "DCDC 输出过流",
};

/// @brief 10：辅助系统
static const char* _errs_10_0[] = {  
    "0",
};

static const char* _errs_10_1[] = {  
    "0",
};

static const char* _errs_10_2[] = {  
    "0",
    "搅拌超压报警",
    "料位检测异常",
    "未选冷却模式-开启自动冷却",
};

static const char* _errs_10_3[] = {  
    "",
    "筛网打开-停正泵",
    "筛网打开-禁止发动机加速",
};

/// @brief 11：防倾翻
static const char* _errs_11_0[] = {  
    "0",
};

static const char* _errs_11_1[] = {  
    "0",
};

static const char* _errs_11_2[] = {  
    "0",
    "车身倾斜过大",
};

static const char* _errs_11_3[] = {  
    "0",
    "任意支撑防倾翻(RPCS)功能失效",
    "倾翻风险-限顺回转",
    "倾翻风险-限展1臂",
    "倾翻风险-限展2臂",
    "倾翻风险-限展3臂",
    "倾翻风险-限展4臂",
    "倾翻风险-限展5臂",
    "倾翻风险-限展6臂",
    "倾翻风险-限逆回转",
    "倾翻风险-限收1臂",
    "倾翻风险-限收2臂",
    "倾翻风险-限收3臂",
    "倾翻风险-限收4臂",
    "倾翻风险-限收5臂",
    "倾翻风险-限收6臂",
    "倾翻风险-强制臂架慢档",
    "倾翻风险-停正泵",
    "整机前方倾翻风险",
    "整机左侧倾翻风险",
    "整机后方倾翻风险",
    "整机右侧倾翻风险",
    "左前支腿缓慢塌陷",
    "右前支腿缓慢塌陷",
    "左后支腿缓慢塌陷",
    "右后支腿缓慢塌陷",
};

/// @brief 12：安全/防碰撞
static const char* _errs_12_0[] = {  
    "0",
};

static const char* _errs_12_1[] = {  
    "0",
};

static const char* _errs_12_2[] = {  
    "0",
    "1臂雷达脏污",
    "2臂雷达脏污",
    "3臂雷达脏污",
    "4臂雷达脏污",
    "5臂雷达脏污",
    "6臂雷达脏污",
};

static const char* _errs_12_3[] = {  
    "0",
    "1臂碰撞风险",
    "2臂碰撞风险",
    "3臂碰撞风险",
    "4臂碰撞风险",
    "5臂碰撞风险",
    "6臂碰撞风险",
    "臂架防碰撞功能异常",
    "雷达环境受限-碰撞预警失效",
};

/// @brief 13：自动布料
static const char* _errs_13_0[] = {  
    "0",
};

static const char* _errs_13_1[] = {  
    "0",
};

static const char* _errs_13_2[] = {  
    "0",
};

static const char* _errs_13_3[] = {
    "0",
    "回转倾角未标定",
    "回转数值异常",
    "1臂倾角数值异常",
    "2臂倾角数值异常",
    "3臂倾角数值异常",
    "4臂倾角数值异常",
    "5臂倾角数值异常",
    "6臂倾角数值异常",
    "7臂倾角数值异常",
    "回转角度校验异常",
    "1臂倾角校验异常",
    "2臂倾角校验异常",
    "3臂倾角校验异常",
    "4臂倾角校验异常",
    "5臂倾角校验异常",
    "6臂倾角校验异常",
    "工控机故障",
    "工控机路径规划错误",
    "工控机与从控制器通信中断",
    "臂架未展开",
};

/// @brief 14：砼管
static const char* _errs_14_0[] = {  
    "0",
};

static const char* _errs_14_1[] = {  
    "0",
};

static const char* _errs_14_2[] = {  
    "0",
    "101号砼管磨损失效预警",
    "102号砼管磨损失效预警",
    "103号砼管磨损失效预警",
    "104号砼管磨损失效预警",
    "105号砼管磨损失效预警",
    "106号砼管磨损失效预警",
    "107号砼管磨损失效预警",
    "108号砼管磨损失效预警",
    "109号砼管磨损失效预警",
    "110号砼管磨损失效预警",
    "111号砼管磨损失效预警",
    "112号砼管磨损失效预警",
    "113号砼管磨损失效预警",
    "114号砼管磨损失效预警",
    "115号砼管磨损失效预警",
    "116号砼管磨损失效预警",
    "117号砼管磨损失效预警",
    "118号砼管磨损失效预警",
    "119号砼管磨损失效预警",
    "120号砼管磨损失效预警",
    "121号砼管磨损失效预警",
    "122号砼管磨损失效预警",
    "123号砼管磨损失效预警",
    "124号砼管磨损失效预警",
    "125号砼管磨损失效预警",
};

static const char* _errs_14_3[] = {  
    "0",
};

static void _set_data_8(lv_obj_t *label, uint8_t v)
{
    char temp[10];
    sprintf(temp, "%d", v);
    lv_label_set_text(label, temp);
}

static void _set_data_16(lv_obj_t *label, uint16_t v)
{
    char temp[10];
    sprintf(temp, "%05d", v);
    lv_label_set_text(label, temp);
}

void working_page_faults_init(lv_obj_t *page)
{
    working_page_faults_t *p = lv_malloc(sizeof (working_page_faults_t));
    uint16_t parent_width, parent_height;

    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);

    int i;
    static lv_style_t bg_style;
    lv_style_init(&bg_style);
    lv_style_set_bg_color(&bg_style, lv_color_make(0xff, 0xff, 0xff));
    lv_style_set_bg_opa(&bg_style, LV_OPA_COVER);
    lv_style_set_text_color(&bg_style, lv_color_white());
    lv_style_set_text_font( &bg_style, &working_mode_28px);
    lv_style_set_radius(&bg_style,0);
    lv_style_set_pad_all(&bg_style,0);

    static lv_style_t circle_style;
    lv_style_init(&circle_style);
    lv_style_set_bg_color(&circle_style, lv_color_make(0xFF, 0, 0));
    lv_style_set_bg_opa(&circle_style, LV_OPA_COVER);
    lv_style_set_radius(&circle_style, LV_RADIUS_CIRCLE);

    static lv_style_t fault_style;
    lv_style_init(&fault_style);
    lv_style_set_text_color(&fault_style, lv_color_black());
    lv_style_set_text_font(&fault_style, &working_mode_28px);

    static lv_style_t fault_style1;
    lv_style_init(&fault_style1);
    lv_style_set_text_color(&fault_style1, lv_color_black());
    lv_style_set_text_font(&fault_style1, &working_mode_28px);

    lv_obj_t *obj = lv_obj_create(page);
    lv_obj_set_size(obj, parent_width, parent_height - 40 - 40 );
    lv_obj_set_pos(obj, 0, 40);
    lv_obj_add_style(obj, &bg_style, 0);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_center(page);

    lv_obj_t *temp = lv_label_create(obj );
    lv_label_set_text( temp, "序号" );
    lv_obj_add_style(temp, &fault_style, 0);
    lv_obj_set_pos(temp, 20 , 8 );

    temp = lv_label_create( obj );
    lv_label_set_text( temp, "代码" );
    lv_obj_add_style(temp, &fault_style, 0);
    lv_obj_set_pos(temp, 20 + 120 , 8 );

    temp = lv_label_create( obj );
    lv_label_set_text( temp, "报警内容" );
    lv_obj_add_style(temp, &fault_style, 0);
    lv_obj_set_pos(temp, 300 , 8 );

    for(i = 0; i < 8; i++)
    {
        p->label_3[i] = lv_label_create( obj );
        lv_label_set_text( p->label_3[i], "" );
        lv_obj_add_style(p->label_3[i], &fault_style1, 0);
        lv_obj_set_pos(p->label_3[i], 300 , 50 + 42 *i );
    }

    for(i = 0; i < 8; i++)
    {
        p->label_1[i] = lv_label_create( obj );
        lv_label_set_text( p->label_1[i], "" );
        lv_obj_add_style(p->label_1[i], &fault_style1, 0);
        lv_obj_set_pos(p->label_1[i], 33 , 50 + 42 *i );
    }

    for(i = 0; i < 8; i++)
    {
        p->label_2[i] = lv_label_create( obj );
        lv_label_set_text( p->label_2[i], "" );
        lv_obj_add_style(p->label_2[i], &fault_style1, 0);
        lv_obj_set_pos(p->label_2[i], 130 , 50 + 42 *i );
    }
}


