/****Write a function code to return the pointer which is greater in two values***/
#include <stdio.h>
void com(int a,int b)
{
    int *ptr1=&a;
    int *ptr2=&b;
    
    if(*ptr1>*ptr2)
    {
        printf("%d is greater\n",*ptr1);
    }
    else
    {
        printf("%d is greater\n",*ptr2);
    }
    
}
int main()
{
    int a,b,c;
    printf("Enter the value of A\n");
    scanf("%d",&a);
    printf("Enter the value of B\n");
    scanf("%d",&b);
    com(a,b);

    return 0;
}

