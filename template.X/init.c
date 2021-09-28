//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// このファイルの内容は書き換えないでください
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include "setting.h"

// 全体初期化
void init(void)
{
    OSCCON = _OSCCON;
    GPIO = 0x0;
    TRISIO = 0x0;
    ANSEL = 0x0;
   
    #ifdef USE_INPUT
    init_input();
    #endif
    
    #ifdef USE_ADC
    init_adc();
    #endif

    #ifdef USE_CCP1_PWM
    init_ccp1_pwm();
    #endif
    
}
