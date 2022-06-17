#include <stdio.h>
#include <string.h>
struct person
{
char name[20];
char dateofjoin[10];
float salary;
}p[5];
int main(void)
{
int i=0;
printf("\n Enter Person Name : ");
gets(p[i].name);
printf("\n Enter Person Date of Joining (dd-mm-yyyy) : ");
scanf("%s",p[i].dateofjoin);
printf("\n Enter Person Salary in RS: ");
scanf("%f",&p[i].salary);
printf("\n Name = %s",p[i].name);
printf("\n DOJ = %s",p[i].dateofjoin);
printf("\n Salary = %.2f",p[i].salary);
return 0;
}
