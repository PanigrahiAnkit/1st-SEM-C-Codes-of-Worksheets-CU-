/*
 * C program to find the length of a string without using the
 * built-in function
 */
#include <stdio.h>
void main()
{
    char str[50];
    int i, length = 0;

    printf("Enter a string : \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("So, the length of %s = %d\n", str, length);
}

/*
void main()
{
    char str[12] = "AnkitPanigrahi";
    int i=0;

}
*/