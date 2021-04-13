// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"
#include "stdio.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    //uLCD.printf("\nHello uLCD World\n"); //Default Green on black text
    //uLCD.printf("\n  Starting Demo...");
    

    uLCD.textbackground_color(0xFFFFFF);
    uLCD.background_color(0xFFFFFF);
    uLCD.color(GREEN);

    uLCD.cls();
    uLCD.puts("108061111\n");
//    uLCD.printf("\n");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    for (int i=30; i>=0; --i) {
        char tmp[2];
        sprintf(tmp, "%2d", i);

        //tmp[0] = '0' +  i / 10;
        //tmp[1] = '0' + i % 10;
        uLCD.locate(1,2);
        uLCD.puts(tmp);
        //uLCD.printf("%2d",i);
        ThisThread::sleep_for(200ms);
    }
}
