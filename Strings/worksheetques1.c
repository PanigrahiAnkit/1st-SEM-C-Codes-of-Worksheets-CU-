#include <stdio.h>
#include <string.h>
void StrCat(char str[], char str1[])
{
    int i, j = 0;
    for (i = (strlen(str) - 1); i <= (strlen(str) + strlen(str1) - 2); i++)
    {
        str[i] = str1[j];
        j++;
    }

    printf("\n The Concatenation of two strings is \"%s\" \n \n", str);
}

void StrCmp(char str[], char str1[])
{
    int i, j = 0, LED = 0;
    for (i = 0; i <= strlen(str) - 1; i++)
    {
        if (str[i] != str1[j])
        {
            LED = 1;
            break;
        }
        j++;
    }
    if (LED == 0)
        printf("\n Two strings is \"%s\" and \"%s\" are same \n \n", str, str1);
    else
        printf("\n Two strings is \"%s\" and \"%s\" are  not same \n \n", str, str1);
}

void StrRev(char str[])
{
    char str1[20];
    int i, j = 0;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        str1[j] = str[i];
        j++;
    }
    printf("\n The reverse string of \"%s\" is \"%s\" \n \n", str, str1);
}

void StrCpy(char str[], char str1[])
{
    int i, j = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        *(str + j) = str1[i];
        j++;
    }
    *(str + j) = '\0';
    printf("\n Str1 is copied into Str \n");
    printf("\n Str= %s \n", str);
}

int main()
{
    char str[20], str1[20], ch;
    int ope;
    printf("\n Enter the first string :");
    scanf("%s", str);
    printf("\n Enter the second string :");
    scanf("%s", str1);
    printf("\n~~~~~~ Menu ~~~~~~*");
    printf("\n 1.strcat");
    printf("\n 2.strcmp");
    printf("\n 3.strrev");
    printf("\n 4.strcpy");
    // printf("\n 5.Exit \n");
    printf("\n Which function do you want to use:- ");
    scanf("%d", &ope);
    switch (ope)
    {
    case 1:
        StrCat(str, str1);
        break;
    case 2:
        StrCmp(str, str1);
        break;
    case 3:
        StrRev(str);
        break;
    case 4:
        StrCpy(str1, str); // contents of string are copied into string1
        break;

    default:
        printf("\n Invalid Choice. \n \n");
    }
    return 0;
} // End of main