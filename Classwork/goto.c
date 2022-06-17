#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d", &num);

    if (num % 2 == 0)
        goto even;

    else
        goto odd;

even:
    printf("Entered number %d is an even number.\n", num);
    exit(0);
odd:
    printf("Entered number %d is an odd number.", num);
}