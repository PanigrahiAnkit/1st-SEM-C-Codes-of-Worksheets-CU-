#include <stdio.h>
int sum(a, b)
{
    int m, n, s;
    printf("Enter two numbers :\n");
    scanf("%d%d", &m, &n);
    s = m + n;
    return s;
}

int main()
{
    int x, y;
    // sum(x, y);
    printf("Sum is %d", sum(x, y));
    return 0;
}