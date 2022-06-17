#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
int date;
};
int main ()
{
printf("NAME : BANI SONI, UID: 21BCS2245 \n");
int i,f=0; struct date d[2]; 
for(i=0;i<2;i++)
{
printf("\nEnter day for the %dth date\n",i+1);
scanf("%d",&d[i].date);
}
if(d[0].date==d[1].date)
{
f=1;
}
if(f==1)
printf("\nThe dates are equal");
else
printf("\nThe dates are not equal");
printf ("\n\nTo exit press any key.");
}