#include <stdio.h>
int main()
{
    int sum, num;
    printf("Enter positive numbers (0 or -ve number to stop):\n");
    sum = 0;
    scanf("%d", &num);
    while (num > 0)
    {
        sum += num;
        //scanf("%d", &num);
    }
    printf("Sum = %d ", sum);
}