#include <stdio.h>
long int facto(int n);
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %ld", num, facto(num));
    return 0;
}

long int facto(int num)
{
    if (num >= 1)
        return num * facto(num - 1);
    else
        return 1;
}