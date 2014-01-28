#include <xc.h>
#include <delay.c>

#pragma config WDT = OFF
#pragma config OSC = IRCIO7
#pragma config LVP = OFF

unsigned char ad8bit(unsigned char kanal);

void main() {
    OSCCON = 0x70;
    ADCON0 = 0xC1;
    DelayMs(1);
    TRISC = 0xBF;
    SPBRG = 0x19;
    BRGH = 1;
    SPEN = 1;
    TXEN = 1;
    while(1) {
        while(!TRMT);
        TXREG = ad8bit(0);
        DelayMs(200);
    }
}

unsigned char ad8bit(unsigned char kanal) {
    kanal <<= 3;
    ADCON0 = 0xC1 | kanal;
    DelayUs(10);
    GODONE = 1;
    while (GODONE);
    return ADRESH;
}
