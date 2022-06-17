#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discr, r1, r2, realPart, imgPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discr = b * b - 4 * a * c;

    if (discr > 0)
    {
        r1 = (-b + sqrt(discr)) / (2 * a);
        r2 = (-b - sqrt(discr)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }

    //condition for real and equal roots
    else if (discr == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", r1);
    }

    // if roots are not real
    else
    {
        realPart = -b / (2 * a);
        imgPart = sqrt(-discr) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imgPart, realPart, imgPart);
    }
    return 0;
}