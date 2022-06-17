/*#include <stdio.h>

int main()

{

    float f = 1;

    switch (f)

    {

    case 1.0:

        printf("yes\n");

        break;

    default:

        printf("default\n");
    }
} */

#include <stdio.h>

void main()

{

    int k = 8;

    int x = 0 == 1 && k++;

    printf("%d%d\n", x, k);
}