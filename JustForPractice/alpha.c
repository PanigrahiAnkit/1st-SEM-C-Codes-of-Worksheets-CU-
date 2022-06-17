#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a value :\n");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
        printf("Entered value %c is a capital letter.\n", ch);
    else if (ch >= 97 && ch <= 122)
        printf("%c is a small letter.\n", ch);
    else if (ch >= 48 && ch <= 57)
        printf("%c is a number.\n", ch);
    else if (ch >= 33 && ch < 47 || ch >= 58 && ch < 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126)
        printf("Entered value %c is a special symbol.\n", ch);
    else
        printf("Wrong input");
    return 0;
}