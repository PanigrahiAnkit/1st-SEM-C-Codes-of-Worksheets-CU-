// WAP to find the largest of three.
/*#include <stdio.h>
int compare(a, b, c)
{
    int x, y, z, max;
    printf("Enter the numbers you want to compare :\n");
    scanf("%d%d%d", &x, &y, &z);
    max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    return max;
}
int main()
{
    int d;
    d = compare();
    printf("So the largest number is %d", d);
    return 0;
} */

// WAP to find the smallest of three numbers.
#include <stdio.h>
int compare(a, b, c)
{
    int x, y, z, max, min;
    printf("Enter the numbers you want to compare :\n");
    scanf("%d%d%d", &x, &y, &z);
    // max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
    // return max;
    return min;
}

int main()
{
    int d;
    d = compare();
    printf("So the smallest number is %d", d);
    return 0;
}
