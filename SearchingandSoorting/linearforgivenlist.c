#include <stdio.h>

int main()
{
    int a[6] = {3, 20, 4, 6, 8, 10};
    int i, x;
    // printf("Enter the array element : \n");

    for (i = 0; i < 7; i++)
    {
        scanf("\t%d", &a[i]);

        printf("\nEnter element to search : ");
        scanf("%d", &x);
    }
    for (i = 0; i < 7; ++i)
        if (a[i] == 6)
            break;

    return 0;
}