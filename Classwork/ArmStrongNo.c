#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, totaldigits, sum;
    int i;
    int m, n;
    printf("NAME: ANKIT PANIGRAHI\n UID: 21BCS2588 \n");

    printf("Enter the lower limit: ");
    scanf("%d", &m);
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Armstrong number between %d to %d are: \n", m, n);

    for (i = m; i <= n; i++)
    {
        sum = 0;
        num = i;

        totaldigits = (int)log10(num) + 1;

        while (num > 0)
        {

            lastDigit = num % 10;

            sum = sum + ceil(pow(lastDigit, totaldigits));

            num = num / 10;
        }
        if (i == sum)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}