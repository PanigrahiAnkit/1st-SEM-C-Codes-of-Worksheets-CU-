#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, sum, sub, multi;
    float division;
    char ch;

    printf("ENTER THE NUMBER FOR FOLLOWING OPERATIONS\n");
    printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
    scanf("%c", &ch);
    printf("ENTER  THE NUMBER TO  CALCULATE \n");
    scanf("%d %d", &num1, &num2);
    switch (ch)
    {
    case '1':
        sum = num1 + num2;
        printf("sum of the number is %d \n", sum);
        break;
    case '2':
        sub = num1 - num2;
        printf("substraction of two numbers is %d \n", sub);
        break;

    case '3':
        multi = num1 * num2;
        printf("multiply of numbers is %d \n", multi);
        break;
    case '4':
        division = num1 / num2;
        printf(" quotient is %f \n", division);
        break;
    default:
        printf("wrong input");
    }
    return 0;
}