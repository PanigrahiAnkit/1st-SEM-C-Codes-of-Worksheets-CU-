#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
int main()
{

    int n, last_num, sum = 0, temp;
    printf("Enter a five digit number: \n");
    scanf("%d", &n);
    temp = n;

    while (temp > 0)
    {
        last_num = temp % 10;
        sum = sum + last_num;
        temp = temp / 10;
    }
    printf("The sum of the digits %d is : %d", n, sum);
    return 0;
} */

int main()
{

    int n, i, sum;
    int value = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for (i = 0; i < 5; i++)
    {
        sum = n % 10;
        value = value + sum;
        n = n / 10;
    }

    printf("%d", value);

    return 0;
}