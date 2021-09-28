//
// PWM
//
#include "setting.h"

#ifdef USE_CCP1_PWM

// CCP1 を PWM モードで初期化
void init_ccp1_pwm(void)
{
    // CCP1 の動作モードを設定します
    // 0b1100 をセットすると PWM 出力モードになります
    // 詳しくはデータシート 77 p を参照してください
    CCP1CONbits.CCP1M = 0b1100 ;

    // CCP1 には Timer2 が接続されます
    // Timer2 の動作クロックは FOSC/4 で固定です
    
    // Timer2 の prescale を設定します
    // 0b00 : x1
    // 0b01 : x4
    // 0b1x : x16
    // PWM 周期やパルス幅の計算で使います
    // 詳しくはデータシート 52 p を参照してください
    T2CONbits.T2CKPS = ? ;

    // 1 をセットすると Timer2 が ON になり PWM 出力が始まります
    // 詳しくはデータシート 52 p を参照してください
    T2CONbits.TMR2ON = 1 ;
}

#endif