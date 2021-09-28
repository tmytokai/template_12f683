#ifndef _SETTING_H
#define _SETTING_H

// オシレータ(発振回路)の設定です(今回は 4 Mhz)
// 詳しくはデータシート 22p を参照してください
#define _OSCCON 0b01100000

// __delay_ms 関数を使う場合に define する必要がある設定です
// 上のオシレータの設定と周波数を合わせてください(今回は 4 Mhz)
#define _XTAL_FREQ 4000000

// デジタル入力を使う場合はコメントアウトを解除してください
//#define USE_INPUT

// A/D変換を使う場合はコメントアウトを解除してください
//#define USE_ADC

// PWM を使う場合はコメントアウトを解除してください
//#define USE_CCP1_PWM

#include <xc.h>

void init(void);

#ifdef USE_INPUT
void init_input(void);
#endif

#ifdef USE_ADC
void init_adc(void);
int adc(unsigned char chn);
#endif

#ifdef USE_CCP1_PWM
void init_ccp1_pwm(void);
#endif

#endif
