#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10] = "abyz";
    int i;
    for(i=0; i<4; i++)
    {
        printf("%c",str1[i] -32);
    }
}