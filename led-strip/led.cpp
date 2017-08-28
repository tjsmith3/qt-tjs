#include "led.h"

Led::Led()
{
    r = 0;
    g = 0;
    b = 0;
    a = 255;
}

void Led::setColor(int newr,  int newg,  int newb,  int newa)
{
    r = newr;
    b = newb;
    g = newg;
    a = newa;
}

void Led::getColor(int *pr, int *pg, int *pb, int *pa)
{
    *pr = this->r;
    *pg = this->g;
    *pb = this->b;
    *pa = this->a;

}
