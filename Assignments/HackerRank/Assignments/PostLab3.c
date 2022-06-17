#include <stdio.h>

int main()

{
    int quantity;
    int total;
    char ch;

    printf("Enter the item you want : \n");
    scanf("%c", &ch);

    switch (ch)
    {

    case 'B':
        printf("Burger\n");
        printf("Enter the Quantity(in nos) :");
        scanf("%d", &quantity);
        total = 220 * quantity;
        printf("Total amount to be paid : %d", total);

        break;

    case 'F':
        printf("French Fries");
        printf("Enter the Quantity(in nos) :");
        scanf("%d", &quantity);
        total = 50 * quantity;
        printf("Total amount to be paid : %d", total);
        break;

    case 'S':
        printf("Sandwich");
        printf("Enter the Quantity(in nos) :");
        scanf("%d", &quantity);
        total = 150 * quantity;
        printf("Total amount to be paid : %d", total);

        break;

    case 'P':
        printf("Pizza");
        printf("Enter the Quantity(in nos) :");
        scanf("%d", &quantity);
        total = 300 * quantity;
        printf("Total amount to be paid : %d", total);
    }

    return 0;
}