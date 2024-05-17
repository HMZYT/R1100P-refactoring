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
    uiSubjects.paras = (lv_subject_t*) lv_malloc(sizeof(lv_subject_t));
    lv_subject_init_int(&paras[home_motor_speed], dtR1100PUi.getDtInt( 0));

//    lv_subject_t c = paras[0];
//    int b = lv_subject_get_int(&c);
}

lv_subject_t* UiSubjects::getSubjectsParas()
{
    return paras;
}

UiSubjects uiSubjects;
