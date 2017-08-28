#ifndef LEDSTRIP_H
#define LEDSTRIP_H

#include "led.h"

#define NUM_LED_PER_STRIP   60

class Ledstrip
{
public:
    Ledstrip();
    void setColor(int num, int r, int g, int b, int a);
    void setColorAll(int r, int g, int b, int a);
    void getColor(int num, int *pr, int *pg, int *pb, int*pa);
    int getNumLED();

private:
    int numLED;
    Led *strip[NUM_LED_PER_STRIP];
};

#endif // LEDSTRIP_H
