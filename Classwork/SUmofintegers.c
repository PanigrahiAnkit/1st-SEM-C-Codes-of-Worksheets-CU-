//WAP to print the sum of the integers greater than 100 and less than 200 and divisible by 5
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Sum of all the integers divisible by 5 and greater than 100 and less than 200 is:\n");
    printf("No.\t Sum\n");
    for (i = 101; i < 200; i++)
    {
        if (i % 5 == 0)
        {
            sum = sum + i;
            printf("%d\t%d\n", i, sum);
        }

        // printf("%d", sum);
    }
}
