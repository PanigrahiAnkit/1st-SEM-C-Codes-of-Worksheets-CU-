/* #include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    char str[20];

    printf("Enter positive integer value: ");
    scanf("%d", &a);
    printf("Enter float value: ");
    scanf("%f", &b);
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("\n%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);
    printf("%s", str);
} */

#include <stdio.h>
int main()
{
    int quantity;
    int total;
    char str[20];
    printf("Enter the item you want : ");
    scanf("%[^\n]", str);

    switch (str)

    {

    case "Burger":

        printf("Burger");

        printf("Enter the Quantity(in nos) :");

        scanf("%d", &quantity);

        total = 220 * quantity;

        printf("Total amount to be paid : %d", total);

        break;

    case "French Fries":

        printf("French Fries");

        printf("Enter the Quantity(in nos) :");

        scanf("%d", &quantity);

        total = 50 * quantity;

        printf("Total amount to be paid : %d", total);

        break;

    case "Sandwich":

        printf("Sandwich");

        printf("Enter the Quantity(in nos) :");

        scanf("%d", &quantity);

        total = 150 * quantity;

        printf("Total amount to be paid : %d", total);

        break;

    case "Pizza":

        printf("Pizza");

        printf("Enter the Quantity(in nos) :");

        scanf("%d", &quantity);

        total = 300 * quantity;

        printf("Total amount to be paid : %d", total);
    }

    return 0;
}