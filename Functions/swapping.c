#include <stdio.h>

void swap(int n1, int n2)
{
    int temp;
    printf("In main values before swapping %d %d\n", n1, n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("In main values after swapping %d %d\n", n1, n2);
}
int main()
{
    int n1, n2;
    printf("Enter two numbers :");
    scanf("%d%d", &n1, &n2);
    printf("the values before swapping %d %d\n\n", n1, n2);
    swap(n1, n2);
    printf("the values after swapping %d %d", n1, n2);
    return 0;
}