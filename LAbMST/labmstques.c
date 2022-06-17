#include <stdio.h>

int main()
{
    int monthnumb;
    printf("Enter the month number that you wish to get the month name for :\n");
    printf("Month No : ");
    scanf("%d", &monthnumb);

    switch (monthnumb)
    {
    case 1:
        printf("It is January");
        break;
    case 2:
        printf("It is February");
        break;
    case 3:
        printf("It is March");
        break;
    case 4:
        printf("It is April");
        break;
    case 5:
        printf("It's May");
        break;
    case 6:
        printf("It's June");
        break;
    case 7:
        printf("It's July");
        break;
    case 8:
        printf("It's August");
        break;
    case 9:
        printf("It's September");
        break;
    case 10:
        printf("It's October");
        break;
    case 11:
        printf("It's November");
        break;
    case 12:
        printf("It's December");
        break;

    default:
        printf("The month number you have entered is not valid \nPlease enter the valid month number again ....\n");
        break;
    }
    return 0;
}
