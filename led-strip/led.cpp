#include "led.h"

led::led()
{
    r = 0;
    g = 0;
    b = 0;
    z = 0;
}

void led::setColor(unsigned short newr,  unsigned short newg,  unsigned short newb,  unsigned short newz)
{
    r = newr;
    b = newb;
    g = newg;
    z = newz;
}

void led::getColor(unsigned short *pr, unsigned short *pg, unsigned short *pb, unsigned short *pz)
{
    *pr = this->r;
    *pg = this->g;
    *pb = this->b;
    *pz = this->z;

}
