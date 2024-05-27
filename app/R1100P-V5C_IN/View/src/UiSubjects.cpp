#include "../inc/UiSubjects.h"
#include "../inc/sysparas_defs.h"
#include "../../Model/inc/DtR1100PUi.h"

UiSubjects::UiSubjects()
{
}

UiSubjects::~UiSubjects()
{
}

void UiSubjects::uiSubjectsInit()
{
    uiSubjects.paras = (lv_subject_t*) lv_malloc(sizeof(lv_subject_t) * SUBJECT_COUNTS_PARAS_END);
    lv_subject_init_int(&paras[system_paras_language], dtR1100PUi.getDtInt( system_paras_language));
    lv_subject_init_int(&paras[machine_motor_speed], dtR1100PUi.getDtInt( machine_motor_speed));
}

lv_subject_t* UiSubjects::getSubjectsParas()
{
    return paras;
}

UiSubjects uiSubjects;
