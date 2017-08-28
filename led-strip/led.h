#ifndef LED_H
#define LED_H


class led
{
public:
    led();
    void setColor(unsigned short r,  unsigned short g,  unsigned short b,  unsigned short z);
    void getColor(unsigned short *r, unsigned short *g, unsigned short *b, unsigned short *z);

private:
    unsigned short r,g,b,z;
};

#endif // LED_H
