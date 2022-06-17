#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year to check whether it's a leap year or not : \n");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("year %d is a leap year.\n", year);

    else if (year % 100 == 0)
        printf("year %d isn't a leap year.\n", year);

    else if (year % 4 == 0)
        printf("year %d is a leap year.\n", year);

    else //Here for non leap year it will show this output
        printf("%d isn't a leap year.\n", year);

    return 0;
}