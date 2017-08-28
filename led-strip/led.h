#ifndef LED_H
#define LED_H


class Led
{
public:
    Led();
    void setColor(int r,  int g,  int b,  int a);
    void getColor(int *pr, int *pg, int *pb, int *pa);

private:
    int r,g,b,a;
};

#endif // LED_H
