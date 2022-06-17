#include <stdio.h>

int main()
{
    int n, s;
    printf("Enter n :\n");
    scanf("%d", &n);

    s = n * (n + 1);

    printf("\nThe sum of the n natural numbers is %d", s);
}