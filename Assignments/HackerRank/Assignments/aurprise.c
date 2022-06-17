#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the number upto which you want to get sum\n");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum is %d", sum);
}