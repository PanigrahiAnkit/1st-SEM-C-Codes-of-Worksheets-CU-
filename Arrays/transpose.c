#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    // taking input of matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element A[%d][%d]:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n");
    // transpose of matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[j][i];
        }
    }
    printf("Matrix A\n\n");
    // printing the elements of matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }
    printf("Transpose of Matrix A\n\n");
    // printing the elements of transpose of matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }

    return 0;
}