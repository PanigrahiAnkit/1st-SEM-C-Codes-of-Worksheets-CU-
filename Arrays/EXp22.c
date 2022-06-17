/*Write a program to perform various matrix operations Addition, Subtraction, Multiplication, Transpose using switch-case statement*/
#include <stdio.h>
void main()
{
    int matrix, a[3][3], b[3][3], c[3][3];
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
    printf("Choose the matrix operation to perform\n");
    printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for TRanspose\n");
    scanf("%d", &matrix);
    switch (matrix)
    {
    case 1:
        // addition of matrices A and B
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("\nSum of matrices A and B\n\n");
        // printing the elements of sum of matrices A and B
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
        break;
    case 2:
        // subtracting the value of B from A to matrix C
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
            }
        }
        printf("\nThe subtraction of the two matrices A and B is \n");
        // printing the required matrix C
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
        break;
    case 3:
        printf("\n\n");
        // multiplication of matrices A and B
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nMultiplication of matrices A and B\n\n");
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
        break;
    case 4:
        // transpose of matrix A
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = a[j][i];
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
        break;
    default:
        printf("Invalid Input!!");
        break;
    }
}