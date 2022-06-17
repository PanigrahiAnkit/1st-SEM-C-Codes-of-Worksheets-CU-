#include <stdio.h>
#include <string.h>
int main()
{
    int str;
    char a[100], b[100];
    printf("Enter string 1 :\n");
    scanf("%s", &a);
    printf("Enter string 2 :\n");
    scanf("%s", &b);
    printf("Choose any operation (1 - 5)\n");
    printf("1.Reversing first string.\n2.getting length of first string.\n3.for comparing the two strings.\n");
    printf("4.for copying string 2 in string 1.\n5.for adding the two strings.\n");
    scanf("%d", &str);
    switch (str)
    {
    case 1:
        printf("%s", strrev(a));
        break;
    case 2:
        printf("%d", strlen(a));
        break;
    case 3:
        printf("%d", strcmp(a, b));
        break;
    case 4:
        printf("%s", strcpy(a, b));
        break;
    case 5:
        printf("%s", strcat(a, b));
        break;
    default:
        printf("INVALID INPUT BY USER!!");
        break;
    }
}