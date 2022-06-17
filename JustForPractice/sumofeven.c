/*#include <stdio.h>

int main()
{
    int n, s, i = 1;
    printf("Enter a number :");
    scanf("%d", &n);
    do
    {
        s = n * (n + 1);
        printf("The sum of the n even numbers is : %d", s);
        i++;
    } while (i<=1);
}*/

#include <stdio.h>

int main()
{

    int i = 2, n, sum;
    printf(" Enter the value of n:\n");
    scanf("%d", &n);
    do
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n += 2);
                }

    } while (i <= n);

    return 0;
}