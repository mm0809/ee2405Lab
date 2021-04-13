#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    uLCD.reset();
    uLCD.background_color(0xFFFFFF);
    uLCD.cls();
      uLCD.printf("\nHello uLCD World\n"); //Default Green on black text
      ThisThread::sleep_for(30s);
}
