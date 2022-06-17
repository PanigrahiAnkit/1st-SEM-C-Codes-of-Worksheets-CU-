// Program 6.1: Write a program to illustrate various strings inbuilt functions (strrev, strcmp, strlen, strcpy, strcat…)

/* ---------------- Strings functions ------------------- */
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[12] = "Ankit";
    char str2[12] = "Panigrahi";

    strcat(str1, str2);
    printf("strcat(str1, str2) : %s\n", str1);

    return 0;
}
