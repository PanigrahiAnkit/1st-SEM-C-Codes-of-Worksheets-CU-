#include <stdio.h>

void main()
{

    float x = 1.9, y = 2.4;
    int a, b;

    printf("Value Of x:%f\n", x);
    printf("Value Of y:%f\n", y);

    a = (int)(x + 0.5);
    b = (int)(y + 0.5);
    printf("\nValue Of a:%d\n", a);
    printf("Value Of b:%d", b);
}