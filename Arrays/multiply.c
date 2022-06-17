#include <stdio.h>
int main()
{
    int array[3][3], b[3][3], mul[3][3];
    // taking input of matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element A[%d][%d]:", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n\n");
    // taking input of matrix B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element B[%d][%d]:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\n");
    // addition of matrices A and B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mul[i][j] += array[i][k] * b[k][j];
            }

            // sum[i][j]=array[i][j]+b[i][j];
        }
    }
    printf("Matrix A\n\n");
    // printing the elements of matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", array[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }
    printf("Matrix B\n\n");
    // printing the elements of matrix B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }
    printf("\nMultiplication of matrices A and B\n\n");
    // printing the elements of sum of matrices A and B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mul[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }

    return 0;
}