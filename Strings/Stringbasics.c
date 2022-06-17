// Printing String using scanf %[^\n]s

#include <stdio.h>
#include <string.h>
/*
int main()
{
    char str[50];
    printf("Enter your string:");
    scanfpc("%[^\n]s", str);
    printf("%s", str);
    return 0;
} */

// Printing String using gets and puts.

#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter a string that you want to display :");
    gets(str);
    printf("%s", str);
    // puts(str);
    return 0;
}
