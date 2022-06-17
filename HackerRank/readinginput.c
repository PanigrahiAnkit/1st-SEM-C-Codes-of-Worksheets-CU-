#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, sen[100], s[10];
    printf("Enter a character :\n");
    scanf("%c", &ch);
    printf("Write a string :\n");
    scanf("\n%s", s);
    printf("Enter a sentence :\n");
    scanf("\n%[^\n]", &sen);

    printf("\n%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}