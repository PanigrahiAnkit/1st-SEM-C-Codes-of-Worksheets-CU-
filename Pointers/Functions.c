#include <stdio.h>
#include <stdlib.h>
void main()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;
 
   printf("The largest of the two numbers is :\n\n");  
   printf("Input first number : ");
   scanf("%d", ptr1);
   printf("Input second  number : ");
   scanf("%d", ptr2); 

 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number among two .\n\n",*ptr1);
 }
 else
 {
  printf("\n%d is the maximum number among two.\n\n",*ptr2);
 }
}