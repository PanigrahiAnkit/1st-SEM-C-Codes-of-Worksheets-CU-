#include <stdio.h>

int main()
{

   int a = 15;
   int b = 10;

   printf("Before swapping of the numbers, value of a : %d\n", a);
   printf("Before swapping of the numbers, value of b : %d\n", b);

   swap(&a, &b);

   printf("After swapping of the numbers, value of a : %d\n", a);
   printf("After swapping of the numbers, value of b : %d\n", b);

   return 0;
}
void swap(int *x, int *y)
{

   int temp;

   temp = *x;
   *x = *y;
   *y = temp;
   return;
}