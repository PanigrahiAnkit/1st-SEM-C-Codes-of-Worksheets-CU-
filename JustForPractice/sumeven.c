#include <stdio.h>

void main()
{
    int i, n;
    int sum = 0;

    printf("Enter the value of n :\n");
    scanf("%d", &n);
    i = 1;
    do
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    } while (i <= n);
    printf("Sum of all even numbers from 1 to %d is: %d", n, sum);
}