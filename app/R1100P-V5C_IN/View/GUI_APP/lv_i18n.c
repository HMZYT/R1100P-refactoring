#include "./lv_i18n.h"


////////////////////////////////////////////////////////////////////////////////
// Define plural operands
// http://unicode.org/reports/tr35/tr35-numbers.html#Operands

// Integer version, simplified

#define UNUSED(x) (void)(x)

static inline uint32_t op_n(int32_t val) { return (uint32_t)(val < 0 ? -val : val); }
static inline uint32_t op_i(uint32_t val) { return val; }
// always zero, when decimal part not exists.
static inline uint32_t op_v(uint32_t val) { UNUSED(val); return 0;}
static inline uint32_t op_w(uint32_t val) { UNUSED(val); return 0; }
static inline uint32_t op_f(uint32_t val) { UNUSED(val); return 0; }
static inline uint32_t op_t(uint32_t val) { UNUSED(val); return 0; }

static lv_i18n_phrase_t en_gb_singulars[] = {
    {"385", "Poor material condition"},
    {"449", "Support mode is not selected"},
    {"450", "Wrong support mode"},
    {"451", "irregularity operation of the outrigger"},
    {"452", "Front outrigger anti-interference - limited to 1st section boom fold and turn"},
    {"453", "Back outrigger anti-interference - limit 1st section boom to fold and turn"},
    {"454", "Boom and cab anti-interference - limited to 1st section boom fold"},
    {"455", "Boom and cab anti-interference - limited to reverse turn"},
    {"456", "Small support 1st section boom less than the safety tilt"},
    {"457", "Small support 2nd section boom less than the safety tilt"},
    {"458", "Small support 2nd section boom greater than the safety tilt"},
    {"459", "Small support 2nd section boom greater than the safety tilt"},
    {"460", "Two stage outrigger support - 1st section boom less than the safety tilt"},
    {"461", "Full support - limited forward turn"},
    {"462", "Full support - limited reverse turn"},
    {"463", "Left support - limited reverse turn"},
    {"464", "Right support - limited reverse turn"},
    {"465", "Front support - limited forward turn"},
    {"466", "Front support - limited reverse turn"},
    {"467", "Front support - Limit reverse rotary"},
    {"468", "Front support - limited forward turn"},
    {"469", "Small support - limited forward turn"},
    {"470", "Small support - limited reverse turn"},
    {"471", "Small support - limited turn"},
    {"472", "Right front support - limited forward turn"},
    {"473", "Right front support - limited reverse turn"},
    {"474", "Two stage outrigger support - limited forward turn"},
    {"475", "Two stage outrigger support - limited reverse turn"},
    {"476", "Two stage outrigger support - limited turn"},
    {"477", "First level outrigger support - limited forward turn"},
    {"478", "First level outrigger support - limited reverse turn"},
    {"479", "First outrigger support - limited turn"},
    {"480", "Remote control lock boom 3"},
    {"481", "Remote lock 1+2nd section boom"},
    {"482", "Remote lock 2+3rd section boom"},
    {"483", "Remote lock 1+2+3rd section boom"},
    {"484", "First level outrigger support 1st section boom less than the safe tilt"},
    {"10101", "Battery low voltage"},
    {"10401", "Display communication fault"},
    {"10601", "First maintenance Alarm"},
    {"10602", "Follow-up care Alarm"},
    {"10701", "Low level in boom oil tank"},
    {"10801", "Low fuel level"},
    {"10802", "Low urea level"},
    {"10901", "BMS Level 1 fault"},
    {"20101", "PLC temperature high"},
    {"20201", "Liquid level sensor fault"},
    {"20301", "Purge valve fault"},
    {"20302", "Drain valve fault"},
    {"20303", "Oil refill valve fault"},
    {"20304", "Foward mixing valve fault"},
    {"20305", "Reverse mixing valve fault"},
    {"20306", "Main pump cooling valve fault"},
    {"20307", "Lubricating valve fault"},
    {"20308", "Quick change piston valve fault"},
    {"20309", "2nd section boom unfolding damping solenoid valve fault"},
    {"20310", "2nd section boom folding damping solenoid valve fault"},
    {"20311", "3nd section boom unfolding damping solenoid valve fault"},
    {"20312", "3nd section boom folding damping solenoid valve fault"},
    {"20313", "4th section boom unfolding damping solenoid valve fault"},
    {"20314", "4th section boom folding damping solenoid valve fault"},
    {"20401", "Left front outrigger opening sensor fault"},
    {"20402", "Right front outrigger opening sensor fault"},
    {"20403", "Left rear outrigger opening sensor fault"},
    {"20404", "Right rear outrigger opening sensor fault"},
    {"20405", "Body tilt sensor fault"},
    {"20406", "Motor controller communication failure"},
    {"20407", "BMS communication failure"},
    {"20408", "DCDC communication failure"},
    {"20409", "Transmission tube concentrator communication fault"},
    {"20501", "1120 Alarm"},
    {"20601", "Pump over pressure - limited displacement"},
    {"20602", "Pump oil tank low level"},
    {"20603", "Pump oil at high temperature"},
    {"20604", "First guarantee reminder - limit displacement"},
    {"20605", "Parameter not restored correctly - limit displacement"},
    {"20701", "High boom oil temperature"},
    {"20702", "2nd section boom vibration damping valve stuck"},
    {"20703", "3rd section boom vibration damping valve stuck"},
    {"20704", "4th section boom vibration damping valve stuck"},
    {"20705", "2 stage outrigger support fault"},
    {"20801", "Oil pressure alarm"},
    {"20802", "Coolant overtemperature alarm"},
    {"21001", "Mixing overpressure alarm"},
    {"21002", "Abnormal material level detection"},
    {"21003", "No cooling mode selected - enable automatic cooling"},
    {"21101", "Excessive body tilt"},
    {"21201", "1 arm radar dirty"},
    {"21202", "2 arm radar dirty"},
    {"21203", "3 arm radar dirty"},
    {"21204", "4 arm radar dirty"},
    {"21205", "5 arm radar dirty"},
    {"21206", "6 arm radar dirty"},
    {"21401", "101 concrete pipe wear and failure warning"},
    {"21402", "102 concrete pipe wear and failure warning"},
    {"21403", "103 concrete pipe wear and failure warning"},
    {"21404", "104 concrete pipe wear and failure warning"},
    {"21405", "105 concrete pipe wear and failure warning"},
    {"21406", "106 concrete pipe wear and failure warning"},
    {"21407", "107 concrete pipe wear and failure warning"},
    {"21408", "108 concrete pipe wear and failure warning"},
    {"21409", "109 concrete pipe wear and failure warning"},
    {"21410", "110 concrete pipe wear and failure warning"},
    {"21411", "111 concrete pipe wear and failure warning"},
    {"21412", "112 concrete pipe wear and failure warning"},
    {"21413", "113 concrete pipe wear and failure warning"},
    {"21414", "114 concrete pipe wear and failure warning"},
    {"21415", "115 concrete pipe wear and failure warning"},
    {"21416", "116 concrete pipe wear and failure warning"},
    {"21417", "117 concrete pipe wear and failure warning"},
    {"21418", "118 concrete pipe wear and failure warning"},
    {"21419", "119 concrete pipe wear and failure warning"},
    {"21420", "120 concrete pipe wear and failure warning"},
    {"21421", "121 concrete pipe wear and failure warning"},
    {"21422", "122 concrete pipe wear and failure warning"},
    {"21423", "123 concrete pipe wear and failure warning"},
    {"21424", "124 concrete pipe wear and failure warning"},
    {"21425", "125 concrete pipe wear and failure warning"},
    {"30000", "Remote control and PLC communication fault"},
    {"30001", "Remote control pump swtich does not recover"},
    {"30003", "Remote control one click placing and one click unfoding/folding switch does not reset"},
    {"30101", "PLC power supply VBBr fault - No output"},
    {"30102", "PLC power supply VBBo fault - No output"},
    {"30103", "PLC general power supply VBBRel fault - No output"},
    {"30104", "PLC power supply VBB1 fault - No output"},
    {"30105", "PLC power supply VBB2 fault - No output"},
    {"30106", "PLC power supply VBB3 fault - No output"},
    {"30201", "Pumping pressure sensor 1 fault"},
    {"30202", "Pumping pressure sensor 2 fault"},
    {"30203", "Distribution pressure sensor fault"},
    {"30204", "Pump oil temperature sensor fault"},
    {"30205", "Boom oil temperature sensor fault"},
    {"30206", "Left displacement sensor fault"},
    {"30207", "Right displacement sensor fault"},
    {"30208", "2nd section boom cavity without rod pressure sensor fault"},
    {"30209", "2nd section boom cavity with rod pressure sensor fault"},
    {"30210", "3rd section boom cavity without rod pressure sensor fault"},
    {"30211", "3nd section boom cavity with rod pressure sensor fault"},
    {"30212", "4rd section boom cavity without rod pressure sensor fault"},
    {"30213", "4nd section boom cavity with rod pressure sensor fault"},
    {"30214", "Boom pressure sensor fault"},
    {"30215", "Encoder proximity switch A signal loss"},
    {"30216", "Encoder proximity switch B signal loss"},
    {"30217", "Encoder proximity switch AB signal loss"},
    {"30301", "Main pump 1 displacement valve fault"},
    {"30302", "Main pump 2 displacement valve fault"},
    {"30303", "High pressure valve fault"},
    {"30304", "Low pressure valve fault"},
    {"30305", "Constant pressure pump displacement valve fault"},
    {"30306", "Combination valve/damper valve fault"},
    {"30307", "Swing cylinder valve 1 fault"},
    {"30308", "Swing cylinder valve 2 fault"},
    {"30309", "Left main cylinder valve 1 fault"},
    {"30310", "Right main cylinder valve 1 fault"},
    {"30311", "Left main cylinder valve 2 fault"},
    {"30312", "Right main cylinder valve 2 fault"},
    {"30313", "Foward rotary valve fault"},
    {"30314", "Reverse rotary valve fault"},
    {"30315", "1st section boom unfolding multiple-directional valve fault"},
    {"30316", "1st section boom folding multiple-directional valve fault"},
    {"30317", "2nd section boom unfolding multiple-directional valve fault"},
    {"30318", "2nd section boom folding multiple-directional valve fault"},
    {"30319", "3rd section boom unfolding multiple-directional valve fault"},
    {"30320", "3rd section boom folding multiple-directional valve fault"},
    {"30321", "4th section boom unfolding multiple-directional valve fault"},
    {"30322", "4th section boom folding multiple-directional valve fault"},
    {"30323", "5th section boom unfolding multiple-directional valve fault"},
    {"30324", "5th section boom folding multiple-directional valve fault"},
    {"30325", "6th section boom unfolding multiple-directional valve fault"},
    {"30326", "6th section boom folding multiple-directional valve fault"},
    {"30327", "7th section boom unfolding multiple-directional valve fault"},
    {"30328", "7th section boom folding multiple-directional valve fault"},
    {"30329", "Outrigger valve fault"},
    {"30330", "Boom unloading valve fault"},
    {"30331", "Rotary proportional valve fault"},
    {"30332", "Electronic controlled flush valve fault"},
    {"30333", "Pump discharge valve fault"},
    {"30334", "Charge and drain selector valve fault"},
    {"30401", "Master/slave PLC communication fault"},
    {"30402", "Remote control off/communication fault"},
    {"30403", "GPS communication fault"},
    {"30404", "Chassis communication fault"},
    {"30405", "I/O board communication fault"},
    {"30406", "1st section boom tilt communication fault"},
    {"30407", "2nd section boom tilt communication fault"},
    {"30408", "3rd section boom tilt communication fault"},
    {"30409", "4th section boom tilt communication fault"},
    {"30410", "5th section boom tilt communication fault"},
    {"30411", "6th section boom tilt communication fault"},
    {"30412", "7th section boom tilt communication fault"},
    {"30413", "multiple-directional valve communication fault"},
    {"30414", "Rotary encoder communication fault"},
    {"30415", "Support panel communication fault"},
    {"30416", "Rotary encoder communication fault (slave)"},
    {"30417", "1st section boom tilt communication fault (slave)"},
    {"30418", "2nd section boom inclination communication fault (slave)"},
    {"30419", "3rd section boom tilt communication fault (slave)"},
    {"30420", "4rd section boom tilt communication fault (slave)"},
    {"30421", "5rd section boom tilt communication fault (slave)"},
    {"30422", "6rd section boom tilt communication fault (slave)"},
    {"30423", "7rd section boom tilt communication fault (slave)"},
    {"30424", "Industrial computer communication fault"},
    {"30425", "1 arm radar communication failure"},
    {"30426", "2 arm radar communication failure"},
    {"30427", "3 arm radar communication failure"},
    {"30428", "4 arm radar communication failure"},
    {"30429", "5 arm radar communication failure"},
    {"30430", "6 arm radar communication failure"},
    {"30431", "Expansion IO module communication failure"},
    {"30432", "Communication failure of anti-collision industrial control computer"},
    {"30501", "1120 Alarm - Displacement limited"},
    {"30502", "1130 Alarm - Stop the pump"},
    {"30503", "1130 Alarm - Stop engine"},
    {"30504", "First stage lock"},
    {"30505", "Not connected to base station"},
    {"30506", "Not connected to platform"},
    {"30507", "GPS card reader fault"},
    {"30508", "GPS Dial fault"},
    {"30509", "The GPS communication module damaged"},
    {"30601", "Pump oil temperature high - stop Forward pumpinging"},
    {"30602", "Pump overpressure - stop Forward pumpinging"},
    {"30603", "Optimize stroke Alarm - stroke exception"},
    {"30604", "Low material level - stop Forward pumpinging"},
    {"30605", "Face remote switch - stop pumping"},
    {"30606", "Quick piston change - stop Forward pumpinging"},
    {"30607", "Blocked pipe warning"},
    {"30608", "Blocked pipe Alarm"},
    {"30609", "Boom oil temperature high - stop Forward pumpinging"},
    {"30610", "Scram button pressed - Stop mixing/boom/pumping/outrigger"},
    {"30611", "Air shutoff valve open - prohibit pumping"},
    {"30701", "Boom type not set"},
    {"30702", "High boom oil temperature - lock the boom"},
    {"30703", "Encoder fault"},
    {"30704", "Rotary multiple-directional valve not activated"},
    {"30705", "The 1st section boom multiple-directional valve is not activated"},
    {"30706", "The 2nd section boom multiple-directional valve is not activated"},
    {"30707", "The 3rd section boom multiple-directional valve is not activated"},
    {"30708", "The 4th section boom multiple-directional valve is not activated"},
    {"30709", "The 5th section boom multiple-directional valve is not activated"},
    {"30710", "The 6th section boom multiple-directional valve is not activated"},
    {"30711", "Rear fabric anti-interference - stop Forward pumping"},
    {"30712", "4th section boom oil cylinder overload - stop Forward pumping"},
    {"30713", "Risk of interference between 4th section boom and abutment"},
    {"30714", "Abnormal rotation tilt"},
    {"30801", "Chassis not set"},
    {"30802", "Chassis overgear - stop pumping"},
    {"30803", "Oil pump overspeed - stop engine"},
    {"30804", "Chassis reverse - stop engine"},
    {"30805", "Scram button pressed - stop engine"},
    {"30806", "Gear box fault - stop engine"},
    {"30807", "Hydraulic system drain tips - limit RPM"},
    {"30808", "Oil suction stop valve - stop engine"},
    {"30809", "Engine torque limit"},
    {"30810", "Engine fault"},
    {"31001", "Open the screen. - stop the pump"},
    {"31002", "Screen on - prohibit engine acceleration"},
    {"31101", "Arbitrary support function unavailable - Failed"},
    {"31102", "Tipping risk - Limit forward rotary"},
    {"31103", "Tipping Risk - Limited to unfold 1st section boom"},
    {"31104", "Tipping Risk - Limited to unfold 2nd section boom"},
    {"31105", "Tipping Risk - Limited to unfold 3rd section boom"},
    {"31106", "Tipping Risk - Limited to unfold 4th section boom"},
    {"31107", "Tipping Risk - Limited to unfold 5th section boom"},
    {"31108", "Tipping Risk - Limited to unfold 6th section boom"},
    {"31109", "Tipping risk - Limited reverse turn"},
    {"31110", "Tipping Risk - limited to fold 1st section boom"},
    {"31111", "Tipping Risk - Limited to fold 2nd section boom"},
    {"31112", "Tipping Risk - Limited to fold 3rd section boom"},
    {"31113", "Tipping Risk - Limited to fold 4th section boom"},
    {"31114", "Tipping Risk - Limited to fold 5th section boom"},
    {"31115", "Tipping Risk - Limited to fold 6th section boom"},
    {"31116", "Tipping Risk - Force the boom to slow down"},
    {"31117", "Tipping risk - stop the pump"},
    {"31121", "Overturning risk of the machine"},
    {"31122", "The left front outrigger collapsed"},
    {"31123", "Right front outrigger collapsed"},
    {"31124", "Left rear outrigger collapsed"},
    {"31125", "Right rear outrigger collapsed"},
    {"31201", "1 arm collision risk"},
    {"31202", "2 arm collision risk"},
    {"31203", "3 arm collision risk"},
    {"31204", "4 arm collision risk"},
    {"31205", "5 arm collision risk"},
    {"31206", "6 arm collision risk"},
    {"31207", "Abnormal anti-collision function of the boom"},
    {"31208", "Restricted radar usage environment - collision warning failure"},
    {"31301", "Swing tilt not calibrated"},
    {"31302", "Abnormal turning value"},
    {"31303", "1st section boom tilt value abnormal"},
    {"31304", "2nd section boom tilt value abnormal"},
    {"31305", "3rd section boom tilt value abnormal"},
    {"31306", "4th section boom tilt value abnormal"},
    {"31307", "5th section boom tilt value abnormal"},
    {"31308", "6th section boom tilt value abnormal"},
    {"31309", "7th section boom tilt value abnormal"},
    {"31310", "Rotation tilt check abnormal"},
    {"31311", "1st section boom tilt check abnormal"},
    {"31312", "2nd section boom tilt check abnormal"},
    {"31313", "3rd section boom tilt check abnormal"},
    {"31314", "4th section boom tilt check abnormal"},
    {"31315", "5th section boom tilt check abnormal"},
    {"31316", "6th section boom tilt check abnormal"},
    {"31317", "The industrial computer fault"},
    {"31318", "The path planning of the industrial computer incorrect"},
    {"31319", "The communication between the industrial computer and the slave PLC interrupted"},
    {"31320", "The boom cannot unfold"},
    {"61101", "Arbitrary support function unavailable - Failed"},
    {"61102", "Collapse recognition function unavailable - Failed"},
    {"61103", "Machine tip risk"},
    {"61104", "Left front outrigger collapsed"},
    {"61105", "Right front outrigger collapsed"},
    {"61106", "Left rear outrigger collapsed"},
    {"61107", "Right rear outrigger collapsed"},
    {"00708", "Boom and cab anti-interference - limited forward turn"},
    {"00709", "The front support swing safety tilt is out of limit"},
    {"00718", "Left support - limited forward turn"},
    {"00719", "Right support - limited forward turn"},
    {"00728", "Left front support - limited reverse turn"},
    {"00729", "Left front support - limited reverse turn"},
    {"00738", "Remote lock 1st section boom"},
    {"00739", "Remote lock 2nd section boom"},
    {"00801", "Remote start engine disabled"},
    {"label_00", "Main monitoring"},
    {"label_01", "0times/min"},
    {"label_02", "Quick settings"},
    {"label_03", "Language"},
    {"label_04", "Chinese"},
    {"label_05", "English"},
    {"label_06", "Lighting selection"},
    {"label_07", "Icon annotations and language settings"},
    {"label_08", "Displacement gears"},
    {"label_09", "Coolant temperature"},
    {"label_10", "Power mode"},
    {"label_11", "Dredge mode"},
    {"label_12", "Eco mode"},
    {"label_13", "Pump hydraulic oil temperature"},
    {"label_14", "Tube-Blocking warning"},
    {"label_15", "Bad material condition"},
    {"label_16", "Good material condition"},
    {"label_17", "Common material condition"},
    {"label_18", "Boom hydraulic oil temperature"},
    {"label_19", "Lock boom"},
    {"label_20", "Support safety"},
    {"label_21", "Current support mode"},
    {"label_22", "Unsupported"},
    {"label_23", "Support security warning prompts"},
    {"label_24", "Warning light prompts"},
    {"label_25", "Restriction function"},
    {"label_26", "Full support"},
    {"label_27", "Left support"},
    {"label_28", "Right support"},
    {"label_29", "Front support"},
    {"label_30", "Small support"},
    {"label_31", "First level leg support"},
    {"label_32", "Left front support"},
    {"label_33", "Right front support"},
    {"label_34", "Two level leg support"},
    {"label_35", "Arbitrary support"},
    {"label_36", "Remote control"},
    {"label_37", "Version:R_016ZNV3B.1"},
    {"label_38", "Faults alarm"},
    {NULL, NULL} // End mark
};



static uint8_t en_gb_plural_fn(int32_t num)
{
    uint32_t n = op_n(num); UNUSED(n);
    uint32_t i = op_i(n); UNUSED(i);
    uint32_t v = op_v(n); UNUSED(v);

    if ((i == 1 && v == 0)) return LV_I18N_PLURAL_TYPE_ONE;
    return LV_I18N_PLURAL_TYPE_OTHER;
}

static const lv_i18n_lang_t en_gb_lang = {
    .locale_name = "en-GB",
    .singulars = en_gb_singulars,

    .locale_plural_fn = en_gb_plural_fn
};

static lv_i18n_phrase_t zh_cn_singulars[] = {
    {"385", "料况差"},
    {"449", "未选择支撑方式"},
    {"450", "支撑方式错误"},
    {"451", "违规操作支腿"},
    {"452", "前支腿防干涉-限1臂收和回转"},
    {"453", "后支腿防干涉-限1臂收和回转"},
    {"454", "臂架与驾驶室防干涉-限1臂收"},
    {"455", "臂架与驾驶室防干涉-限逆回转"},
    {"456", "小支撑1臂小于安全角度"},
    {"457", "小支撑2臂小于安全角度"},
    {"458", "小支撑2臂大于安全角度"},
    {"459", "小支撑2臂大于安全角度"},
    {"460", "两级腿支撑1臂小于安全角度"},
    {"461", "全支撑-限顺回转"},
    {"462", "全支撑-限逆回转"},
    {"463", "左支撑-限逆回转"},
    {"464", "右支撑-限逆回转"},
    {"465", "前支撑-限顺回转"},
    {"466", "前支撑-限逆回转"},
    {"467", "前支撑-限逆回转"},
    {"468", "前支撑-限顺回转"},
    {"469", "小支撑-限顺回转"},
    {"470", "小支撑-限逆回转"},
    {"471", "小支撑-限回转"},
    {"472", "右前支撑-限顺回转"},
    {"473", "右前支撑-限逆回转"},
    {"474", "两级腿支撑-限顺回转"},
    {"475", "两级腿支撑-限逆回转"},
    {"476", "两级腿支撑-限回转"},
    {"477", "一级腿支撑-限顺回转"},
    {"478", "一级腿支撑-限逆回转"},
    {"479", "一级腿支撑-限回转"},
    {"480", "遥控器锁3臂"},
    {"481", "遥控器锁1+2臂"},
    {"482", "遥控器锁2+3臂"},
    {"483", "遥控器锁1+2+3臂"},
    {"484", "一级腿支撑1臂小于安全角度"},
    {"10101", "蓄电池电压低"},
    {"10401", "显示屏通信故障"},
    {"10601", "首次保养报警"},
    {"10602", "后续保养报警"},
    {"10701", "臂架油箱液位低"},
    {"10801", "燃油液位低"},
    {"10802", "尿素液位低"},
    {"10901", "BMS 一级故障"},
    {"20101", "控制器温度高"},
    {"20201", "液位传感器故障"},
    {"20301", "清洗阀故障"},
    {"20302", "泄油阀故障"},
    {"20303", "补油阀故障"},
    {"20304", "正搅拌阀故障"},
    {"20305", "反搅拌阀故障"},
    {"20306", "主泵降温阀故障"},
    {"20307", "润滑阀故障"},
    {"20308", "快换活塞阀故障"},
    {"20309", "2臂展减振电磁阀故障"},
    {"20310", "2臂收减振电磁阀故障"},
    {"20311", "3臂展减振电磁阀故障"},
    {"20312", "3臂收减振电磁阀故障"},
    {"20313", "4臂展减振电磁阀故障"},
    {"20314", "4臂收减振电磁阀故障"},
    {"20401", "左前腿开度传感器故障"},
    {"20402", "右前腿开度传感器故障"},
    {"20403", "左后腿开度传感器故障"},
    {"20404", "右后腿开度传感器故障"},
    {"20405", "车身倾角传感器故障"},
    {"20406", "电机控制器通信故障"},
    {"20407", "BMS通信故障"},
    {"20408", "DCDC通信故障"},
    {"20409", "输送管集中器通信故障"},
    {"20501", "1120报警"},
    {"20601", "泵送超压-限排量"},
    {"20602", "泵送油箱液位低"},
    {"20603", "泵送油温高"},
    {"20604", "首保提醒-限排量"},
    {"20605", "未正确还原参数-限排量"},
    {"20701", "臂架油温高"},
    {"20702", "2臂减振阀卡滞"},
    {"20703", "3臂减振阀卡滞"},
    {"20704", "4臂减振阀卡滞"},
    {"20705", "两级腿支撑失效"},
    {"20801", "机油压力报警"},
    {"20802", "冷却液超温报警"},
    {"21001", "搅拌超压报警"},
    {"21002", "料位检测异常"},
    {"21003", "未选冷却模式-开启自动冷却"},
    {"21101", "车身倾斜过大"},
    {"21201", "1臂雷达脏污"},
    {"21202", "2臂雷达脏污"},
    {"21203", "3臂雷达脏污"},
    {"21204", "4臂雷达脏污"},
    {"21205", "5臂雷达脏污"},
    {"21206", "6臂雷达脏污"},
    {"21401", "101号砼管磨损失效预警"},
    {"21402", "102号砼管磨损失效预警"},
    {"21403", "103号砼管磨损失效预警"},
    {"21404", "104号砼管磨损失效预警"},
    {"21405", "105号砼管磨损失效预警"},
    {"21406", "106号砼管磨损失效预警"},
    {"21407", "107号砼管磨损失效预警"},
    {"21408", "108号砼管磨损失效预警"},
    {"21409", "109号砼管磨损失效预警"},
    {"21410", "110号砼管磨损失效预警"},
    {"21411", "111号砼管磨损失效预警"},
    {"21412", "112号砼管磨损失效预警"},
    {"21413", "113号砼管磨损失效预警"},
    {"21414", "114号砼管磨损失效预警"},
    {"21415", "115号砼管磨损失效预警"},
    {"21416", "116号砼管磨损失效预警"},
    {"21417", "117号砼管磨损失效预警"},
    {"21418", "118号砼管磨损失效预警"},
    {"21419", "119号砼管磨损失效预警"},
    {"21420", "120号砼管磨损失效预警"},
    {"21421", "121号砼管磨损失效预警"},
    {"21422", "122号砼管磨损失效预警"},
    {"21423", "123号砼管磨损失效预警"},
    {"21424", "124号砼管磨损失效预警"},
    {"21425", "125号砼管磨损失效预警"},
    {"30000", "遥控器与控制器通信故障"},
    {"30001", "遥控器泵送开关未复位"},
    {"30003", "遥控器一键布料/展收开关未复位"},
    {"30101", "控制器电源VBBr故障-无输出"},
    {"30102", "控制器电源VBBo故障-无输出"},
    {"30103", "控制器总电源VBBRel故障-无输出"},
    {"30104", "控制器电源VBB1故障-无输出"},
    {"30105", "控制器电源VBB2故障-无输出"},
    {"30106", "控制器电源VBB3故障-无输出"},
    {"30107", "控制器电源VBB4故障-无输出"},
    {"30201", "泵送压力1传感器故障"},
    {"30202", "泵送压力2传感器故障"},
    {"30203", "分配压力传感器故障"},
    {"30204", "泵送油温传感器故障"},
    {"30205", "臂架油温传感器故障"},
    {"30206", "左位移传感器故障"},
    {"30207", "右位移传感器故障"},
    {"30208", "2臂无杆腔压力传感器故障"},
    {"30209", "2臂有杆腔压力传感器故障"},
    {"30210", "3臂无杆腔压力传感器故障"},
    {"30211", "3臂有杆腔压力传感器故障"},
    {"30212", "4臂无杆腔压力传感器故障"},
    {"30213", "4臂有杆腔压力传感器故障"},
    {"30214", "臂架压力传感器故障"},
    {"30215", "编码器接近开关A信号丢失"},
    {"30216", "编码器接近开关B信号丢失"},
    {"30217", "编码器接近开关AB信号丢失"},
    {"30301", "主泵1排量阀故障"},
    {"30302", "主泵2排量阀故障"},
    {"30303", "高压阀故障"},
    {"30304", "低压阀故障"},
    {"30305", "恒压泵排量阀故障"},
    {"30306", "合流阀/减振阀故障"},
    {"30307", "摆缸阀1故障"},
    {"30308", "摆缸阀2故障"},
    {"30309", "左主缸阀1故障"},
    {"30310", "右主缸阀1故障"},
    {"30311", "左主缸阀2故障"},
    {"30312", "右主缸阀2故障"},
    {"30313", "顺回转阀故障"},
    {"30314", "逆回转阀故障"},
    {"30315", "1臂展多路阀故障"},
    {"30316", "1臂收多路阀故障"},
    {"30317", "2臂展多路阀故障"},
    {"30318", "2臂收多路阀故障"},
    {"30319", "3臂展多路阀故障"},
    {"30320", "3臂收多路阀故障"},
    {"30321", "4臂展多路阀故障"},
    {"30322", "4臂收多路阀故障"},
    {"30323", "5臂展多路阀故障"},
    {"30324", "5臂收多路阀故障"},
    {"30325", "6臂展多路阀故障"},
    {"30326", "6臂收多路阀故障"},
    {"30327", "7臂展多路阀故障"},
    {"30328", "7臂收多路阀故障"},
    {"30329", "支腿阀故障"},
    {"30330", "臂架卸荷阀故障"},
    {"30331", "回转比例阀故障"},
    {"30332", "电控冲洗阀故障"},
    {"30333", "泵送卸荷阀故障"},
    {"30334", "补泄油选择阀故障"},
    {"30401", "主从控制器通信故障"},
    {"30402", "遥控器关闭/通信故障"},
    {"30403", "GPS通信故障"},
    {"30404", "底盘通信故障"},
    {"30405", "I/O板通信故障"},
    {"30406", "1臂倾角通信故障"},
    {"30407", "2臂倾角通信故障"},
    {"30408", "3臂倾角通信故障"},
    {"30409", "4臂倾角通信故障"},
    {"30410", "5臂倾角通信故障"},
    {"30411", "6臂倾角通信故障"},
    {"30412", "7臂倾角通信故障"},
    {"30413", "多路阀通信故障"},
    {"30414", "回转编码器通信故障"},
    {"30415", "支撑面板通信故障"},
    {"30416", "回转编码器通信故障（从）"},
    {"30417", "1臂倾角通信故障（从）"},
    {"30418", "2臂倾角通信故障（从）"},
    {"30419", "3臂倾角通信故障（从）"},
    {"30420", "4臂倾角通信故障（从）"},
    {"30421", "5臂倾角通信故障（从）"},
    {"30422", "6臂倾角通信故障（从）"},
    {"30423", "7臂倾角通信故障（从）"},
    {"30424", "工控机通信故障"},
    {"30425", "1臂雷达通信故障"},
    {"30426", "2臂雷达通信故障"},
    {"30427", "3臂雷达通信故障"},
    {"30428", "4臂雷达通信故障"},
    {"30429", "5臂雷达通信故障"},
    {"30430", "6臂雷达通信故障"},
    {"30431", "扩展IO模块通信故障"},
    {"30432", "防碰撞工控机通信故障"},
    {"30501", "1120报警-限排量"},
    {"30502", "1130报警-停正泵"},
    {"30503", "1130报警-停发动机"},
    {"30504", "一级锁车"},
    {"30505", "未连接到基站"},
    {"30506", "未连接到平台"},
    {"30507", "GPS读卡故障"},
    {"30508", "GPS拨号故障"},
    {"30509", "GPS通信模块损坏"},
    {"30601", "泵送油温高-停正泵"},
    {"30602", "泵送超压-停正泵"},
    {"30603", "优化行程报警-行程异常"},
    {"30604", "料位低-停正泵"},
    {"30605", "面遥切换-停泵送"},
    {"30606", "快换活塞-停正泵"},
    {"30607", "堵管预警"},
    {"30608", "堵管报警"},
    {"30609", "臂架油温高-停正泵"},
    {"30610", "急停按钮按下-停上装功能"},
    {"30611", "空气截止阀打开-停正泵"},
    {"30701", "未设置臂架类型"},
    {"30702", "臂架油温高-锁臂"},
    {"30703", "编码器故障"},
    {"30704", "回转多路阀未激活"},
    {"30705", "1臂多路阀未激活"},
    {"30706", "2臂多路阀未激活"},
    {"30707", "3臂多路阀未激活"},
    {"30708", "4臂多路阀未激活"},
    {"30709", "5臂多路阀未激活"},
    {"30710", "6臂多路阀未激活"},
    {"30711", "后方布料防干涉-停正泵"},
    {"30712", "4臂油缸超载-停正泵"},
    {"30713", "4臂与支撑座干涉风险"},
    {"30714", "回转角度异常"},
    {"30801", "未设置底盘"},
    {"30802", "底盘超档位-停泵送"},
    {"30803", "油泵超速-停发动机"},
    {"30804", "底盘倒档-停发动机"},
    {"30805", "急停按钮按下-停发动机"},
    {"30806", "分动箱故障-停发动机"},
    {"30807", "液压系统排水提示-限转速"},
    {"30808", "吸油截止阀-停发动机"},
    {"30809", "发动机限扭"},
    {"30810", "发动机故障"},
    {"31001", "筛网打开-停正泵"},
    {"31002", "筛网打开-禁止发动机加速"},
    {"31101", "任意支撑功能不可用-失效"},
    {"31102", "倾翻风险-限顺回转"},
    {"31103", "倾翻风险-限展1臂"},
    {"31104", "倾翻风险-限展2臂"},
    {"31105", "倾翻风险-限展3臂"},
    {"31106", "倾翻风险-限展4臂"},
    {"31107", "倾翻风险-限展5臂"},
    {"31108", "倾翻风险-限展6臂"},
    {"31109", "倾翻风险-限逆回转"},
    {"31110", "倾翻风险-限收1臂"},
    {"31111", "倾翻风险-限收2臂"},
    {"31112", "倾翻风险-限收3臂"},
    {"31113", "倾翻风险-限收4臂"},
    {"31114", "倾翻风险-限收5臂"},
    {"31115", "倾翻风险-限收6臂"},
    {"31116", "倾翻风险-强制臂架慢档"},
    {"31117", "倾翻风险-停正泵"},
    {"31121", "整机倾翻风险"},
    {"31122", "左前支腿塌陷"},
    {"31123", "右前支腿塌陷"},
    {"31124", "左后支腿塌陷"},
    {"31125", "右后支腿塌陷"},
    {"31201", "1臂碰撞风险"},
    {"31202", "2臂碰撞风险"},
    {"31203", "3臂碰撞风险"},
    {"31204", "4臂碰撞风险"},
    {"31205", "5臂碰撞风险"},
    {"31206", "6臂碰撞风险"},
    {"31207", "臂架防碰撞功能异常"},
    {"31208", "雷达使用环境受限-碰撞预警失效"},
    {"31301", "回转倾角未标定"},
    {"31302", "回转数值异常"},
    {"31303", "1臂倾角数值异常"},
    {"31304", "2臂倾角数值异常"},
    {"31305", "3臂倾角数值异常"},
    {"31306", "4臂倾角数值异常"},
    {"31307", "5臂倾角数值异常"},
    {"31308", "6臂倾角数值异常"},
    {"31309", "7臂倾角数值异常"},
    {"31310", "回转角度校验异常"},
    {"31311", "1臂倾角校验异常"},
    {"31312", "2臂倾角校验异常"},
    {"31313", "3臂倾角校验异常"},
    {"31314", "4臂倾角校验异常"},
    {"31315", "5臂倾角校验异常"},
    {"31316", "6臂倾角校验异常"},
    {"31317", "工控机故障"},
    {"31318", "工控机路径规划错误"},
    {"31319", "工控机与从控制器通信中断"},
    {"31320", "臂架未展开"},
    {"61101", "任意支撑功能不可用-失效"},
    {"61102", "塌陷识别功能不可用-失效"},
    {"61103", "整机倾翻风险"},
    {"61104", "左前支腿塌陷"},
    {"61105", "右前支腿塌陷"},
    {"61106", "左后支腿塌陷"},
    {"61107", "右后支腿塌陷"},
    {"00708", "臂架与驾驶室防干涉-限顺回转"},
    {"00709", "前支撑回转安全角度超限"},
    {"00718", "左支撑-限顺回转"},
    {"00719", "右支撑-限顺回转"},
    {"00728", "左前支撑-限逆回转"},
    {"00729", "左前支撑-限顺回转"},
    {"00738", "遥控器锁1臂"},
    {"00739", "遥控器锁2臂"},
    {"00801", "远程启动发动机禁用"},
    {"label_00", "主监控"},
    {"label_01", "0次/min"},
    {"label_02", "快速设置"},
    {"label_03", "语言"},
    {"label_04", "中文"},
    {"label_05", "英文"},
    {"label_06", "亮灯选择"},
    {"label_07", "图标注释及语言设置"},
    {"label_08", "排量档位"},
    {"label_09", "水冷"},
    {"label_10", "强力"},
    {"label_11", "疏通"},
    {"label_12", "节能"},
    {"label_13", "泵送油温"},
    {"label_14", "堵管"},
    {"label_15", "料况差"},
    {"label_16", "料况好"},
    {"label_17", "料况一般"},
    {"label_18", "臂架油温"},
    {"label_19", "锁臂"},
    {"label_20", "支撑安全"},
    {"label_21", "当前支撑模式"},
    {"label_22", "无支撑"},
    {"label_23", "支撑安全预警提示"},
    {"label_24", "警示灯提示"},
    {"label_25", "限制功能"},
    {"label_26", "全支撑"},
    {"label_27", "左支撑"},
    {"label_28", "右支撑"},
    {"label_29", "前支撑"},
    {"label_30", "小支撑"},
    {"label_31", "一级腿支撑"},
    {"label_32", "左前支撑"},
    {"label_33", "右前支撑"},
    {"label_34", "两级腿支撑"},
    {"label_35", "任意支撑"},
    {"label_36", "遥控器"},
    {"label_37", "版本:R_016ZNV3B.1"},
    {"label_38", "故障报警"},
    {NULL, NULL} // End mark
};



static uint8_t zh_cn_plural_fn(int32_t num)
{



    return LV_I18N_PLURAL_TYPE_OTHER;
}

static const lv_i18n_lang_t zh_cn_lang = {
    .locale_name = "zh-cn",
    .singulars = zh_cn_singulars,

    .locale_plural_fn = zh_cn_plural_fn
};

const lv_i18n_language_pack_t lv_i18n_language_pack[] = {
    &en_gb_lang,
    &zh_cn_lang,
    NULL // End mark
};

////////////////////////////////////////////////////////////////////////////////


// Internal state
static const lv_i18n_language_pack_t * current_lang_pack;
static const lv_i18n_lang_t * current_lang;


/**
 * Reset internal state. For testing.
 */
void __lv_i18n_reset(void)
{
    current_lang_pack = NULL;
    current_lang = NULL;
}

/**
 * Set the languages for internationalization
 * @param langs pointer to the array of languages. (Last element has to be `NULL`)
 */
int lv_i18n_init(const lv_i18n_language_pack_t * langs)
{
    if(langs == NULL) return -1;
    if(langs[0] == NULL) return -1;

    current_lang_pack = langs;
    current_lang = langs[0];     /*Automatically select the first language*/
    return 0;
}

/**
 * Change the localization (language)
 * @param l_name name of the translation locale to use. E.g. "en-GB"
 */
int lv_i18n_set_locale(const char * l_name)
{
    if(current_lang_pack == NULL) return -1;

    uint16_t i;

    for(i = 0; current_lang_pack[i] != NULL; i++) {
        // Found -> finish
        if(strcmp(current_lang_pack[i]->locale_name, l_name) == 0) {
            current_lang = current_lang_pack[i];
            return 0;
        }
    }

    return -1;
}


static const char * __lv_i18n_get_text_core(lv_i18n_phrase_t * trans, const char * msg_id)
{
    uint16_t i;
    for(i = 0; trans[i].msg_id != NULL; i++) {
        if(strcmp(trans[i].msg_id, msg_id) == 0) {
            /*The msg_id has found. Check the translation*/
            if(trans[i].translation) return trans[i].translation;
        }
    }

    return NULL;
}


/**
 * Get the translation from a message ID
 * @param msg_id message ID
 * @return the translation of `msg_id` on the set local
 */
const char * lv_i18n_get_text(const char * msg_id)
{
    if(current_lang == NULL) return msg_id;

    const lv_i18n_lang_t * lang = current_lang;
    const void * txt;

    // Search in current locale
    if(lang->singulars != NULL) {
        txt = __lv_i18n_get_text_core(lang->singulars, msg_id);
        if (txt != NULL) return txt;
    }

    // Try to fallback
    if(lang == current_lang_pack[0]) return msg_id;
    lang = current_lang_pack[0];

    // Repeat search for default locale
    if(lang->singulars != NULL) {
        txt = __lv_i18n_get_text_core(lang->singulars, msg_id);
        if (txt != NULL) return txt;
    }

    return msg_id;
}

/**
 * Get the translation from a message ID and apply the language's plural rule to get correct form
 * @param msg_id message ID
 * @param num an integer to select the correct plural form
 * @return the translation of `msg_id` on the set local
 */
const char * lv_i18n_get_text_plural(const char * msg_id, int32_t num)
{
    if(current_lang == NULL) return msg_id;

    const lv_i18n_lang_t * lang = current_lang;
    const void * txt;
    lv_i18n_plural_type_t ptype;

    // Search in current locale
    if(lang->locale_plural_fn != NULL) {
        ptype = lang->locale_plural_fn(num);

        if(lang->plurals[ptype] != NULL) {
            txt = __lv_i18n_get_text_core(lang->plurals[ptype], msg_id);
            if (txt != NULL) return txt;
        }
    }

    // Try to fallback
    if(lang == current_lang_pack[0]) return msg_id;
    lang = current_lang_pack[0];

    // Repeat search for default locale
    if(lang->locale_plural_fn != NULL) {
        ptype = lang->locale_plural_fn(num);

        if(lang->plurals[ptype] != NULL) {
            txt = __lv_i18n_get_text_core(lang->plurals[ptype], msg_id);
            if (txt != NULL) return txt;
        }
    }

    return msg_id;
}

/**
 * Get the name of the currently used locale.
 * @return name of the currently used locale. E.g. "en-GB"
 */
const char * lv_i18n_get_current_locale(void)
{
    if(!current_lang) return NULL;
    return current_lang->locale_name;
}
