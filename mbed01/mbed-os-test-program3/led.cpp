#include "mbed.h"

void Led(DigitalOut &ledpin, int t)
{
   for (int i = 0; i < 2 * t; ++i)
   {                     //blink for 10 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(250ms);
   }
}
