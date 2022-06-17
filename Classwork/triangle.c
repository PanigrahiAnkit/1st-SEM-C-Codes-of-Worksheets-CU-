//WAP to inout all sides of a triangle and check whether the triangle is valid or not.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //sum = a + b;
    if (a + b >= c && a + c >= b && b + c >= a)
    {
        printf("The entered sides are the sides of a valid triangle.\n");
    }
    else
    {
        printf("\nThe triangle is not possible.");
    }
    return 0;
}