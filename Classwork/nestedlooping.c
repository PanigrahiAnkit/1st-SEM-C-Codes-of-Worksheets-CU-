#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Here we are printing stars in the first row followed by two other rows :\n");
    printf("Enter the number of rows :");

    for (i = 1; i <= 3; i++) //to decide the no. of rows
    {

        for (j = 1; j <= 8; j++) //to print the stars
        {
            printf("*");
        }
        printf("\n");
    }
}