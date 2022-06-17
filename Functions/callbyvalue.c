#include <stdio.h>

int x = 10, y = 20;
Fun(x, y);
printf("x=%d, y=%d", x, y);

int fun(int x, int y)
{
    x = 20;
    y = 10;
}