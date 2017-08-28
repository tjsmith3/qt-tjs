#include "ledstrip.h"

Ledstrip::Ledstrip()
{
    int i;

    numLED = NUM_LED_PER_STRIP;

    for (i = 0; i < numLED ; i++)
    {
        this->strip[i] = new Led();
    }
}

// Set the color of a specific LED
void Ledstrip::setColor(int num, int r, int g, int b, int a)
{
    this->strip[num]->setColor(r, g, b, a);
}

// Get the color of a specific LED
void Ledstrip::getColor(int num, int *pr, int *pg, int *pb, int *pa)
{
    this->strip[num]->getColor(pr, pg, pb, pa);
}


// Set the color of all LEDs in the strand
void Ledstrip::setColorAll(int r, int g, int b, int a)
{
    int i;

    for (i=0 ; i< numLED; i++)
    {
        this->strip[i]->setColor(r,g,b,a);
    }
}

int Ledstrip::getNumLED()
{
    return numLED;
}


// TJS:XXX: Perhaps need to be able to shift colors down the strand? (i.e. SPI bus like?)
