#include <xc.h>
#include <delay.c>

#pragma config WDT = OFF
#pragma config OSC = IRCIO7
#pragma config LVP = OFF

void interrupt whatever();

int led = 1;

void main() {
    TRISB = 0x00;
    TRISC = 0xBF;
    SPBRG = 0x19;
    SYNC = 0;
    BRGH = 1;
    SPEN = 1;
    CREN = 1;
    RBIF = 0;
    PEIE = 1;
    RCIE = 1;
    GIE = 1;
    SPEN = 1;
    TXEN = 1;
    TXREG = 0x78;
    while(1) {
        if (led) {
            LATB0 = 1;
            DelayMs(255);
            LATB0 = 0;
            led = 0;
        }
    }
}


void interrupt whatever() {
    int indata;
    if (RCIF) {
       indata = RCREG;
       if ( (indata == 0x78) || (indata == 0x58) ) {
           led = 1;
       }
    }
    RCIF = 0;
}

