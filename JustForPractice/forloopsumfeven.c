#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i += 2)
    {
        sum = sum + i;

        printf("The sum of the n even numbers = %d", sum);
    }
}