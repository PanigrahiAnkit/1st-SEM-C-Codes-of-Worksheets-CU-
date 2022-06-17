#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number between 1 to 4 :");
    scanf("%d", &x);
    switch (x)

    {
    case 1:
        printf("You are cute");
        break;

    case 2:
        printf("You are my sweetie");
        break;

    case 3:
        printf("You are my Q");
        break;

    case 4:
        printf("You are my sugerplum");
        break;

    default:
        printf("You will forever be mine.");
    }
}