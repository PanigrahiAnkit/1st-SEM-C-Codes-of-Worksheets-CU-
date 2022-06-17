#include <stdio.h>

int main()
{
    int a[5], i;
    printf("Enter the values :\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered values are %d", a[i]);
}