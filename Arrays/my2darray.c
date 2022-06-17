#include <stdio.h>

int main()
{
    int matrix[3][4], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter value for rank[%d][%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}