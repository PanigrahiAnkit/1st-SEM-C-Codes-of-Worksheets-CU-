//WAP to print the sum of the n natural numbers.

#include <stdio.h>

void main()
{
    int a, i = 1;
    printf("\n Enter any Number:");
    scanf("%d", &a);
    printf("Multiplication table of %d: \n", a);
    do
    {
        printf("\n %d x %d = %d", a, i, a * i);
        i++;
    } while (i <= 10);
}
