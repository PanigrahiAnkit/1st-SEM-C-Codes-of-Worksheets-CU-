#include <stdio.h>

int main()
{
    int r, peri, area;
    printf("\nEnter the radius of the circle : \n");
    scanf("%d", &r);
    peri = 2 * 3.14 * r;
    area = 3.14 * r * r;
    printf("The perimeter of the circle with radius %d is : %d\n", r, peri);
    printf("The area of the circle of radius %d is : %d", r, area);
}