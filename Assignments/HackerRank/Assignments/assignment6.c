#include <stdio.h>
#include <conio.h>
void main()
{
    int hindi, math, english, physics, chemistry, total;
    float percentage;
    printf("Enter the marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks of Math: ");
    scanf("%d", &math);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Physics: ");
    scanf("%d", &physics);

    printf("Enter the marks of Chemistry: ");
    scanf("%d", &chemistry);

    total = hindi + math + english + physics + chemistry;

    percentage = total / 5;

    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage);
    getch();
}