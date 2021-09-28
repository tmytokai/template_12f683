#include "config.h"
#include "setting.h"

void main(void){

    init();
    
    while(1){
        GP5 = 1;
        __delay_ms(1000);
        GP5 = 0;
        __delay_ms(1000);
    }

    return;
}
