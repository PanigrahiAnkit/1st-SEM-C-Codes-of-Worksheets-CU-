// Program 6.1: Write a program to illustrate various strings inbuilt functions (strrev, strcmp, strlen, strcpy, strcat…)

/* ---------------- Strings functions ------------------- */

/* Types of Strings functions :-
i) strcpy(s1, s2) --- Copies the String
ii) strcat(s1, s2) ----- String concatenate
iii) strlen(s1, s2) ----- Returns the length of the string
iv) strcmp(s1, s2) ----- Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2   */

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[12] = "Ankit";
    char str2[12] = "Panigrahi";
    char str3[12];

    int len;

    strcpy(str3, str1);
    printf("strcpy(str3, str1) : %s\n", str3);
    strcat(str1, str2);
    printf("strcat(str1, str2) : %s\n", str1);
    len = strlen(str1);
    printf("strlen(str1) : %d\n", len);
    strcmp(str1, str2);
    printf("strcmp(str1, str2) : %d\n", strcmp(str1, str2));
    return 0;
}
