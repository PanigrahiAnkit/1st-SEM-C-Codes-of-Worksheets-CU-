#include <stdio.h>

int main()
{
    int i, n;
    int a = 0, b = 1;
    int c = a + b;

    // printf("Enter the number of times you want to repeat the series :\n");
    scanf("%d", &n);

    printf("Fibonacci series: \n %d %d ", a, b);

    for (i = 3; i <= 10; i++) //here 10 can be replaced by n numbers
    {
        printf("%d ", c);

        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}