#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    char str[20];

    printf("Enter positive integer value :");
    scanf("%d", &a);

    printf("Enter float value :");
    scanf("%f", &b);

    printf("Enter a character :");
    scanf(" %c", &c);

    printf("Enter a string :");
    scanf(" %[^\n]", str);

    printf("\n%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);
    printf("%s", str);
}
