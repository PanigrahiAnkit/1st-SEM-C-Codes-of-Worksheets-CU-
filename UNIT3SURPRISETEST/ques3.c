#include<stdio.h>
#include<stdlib.h>
int main()
{
 printf("NAME : BANI SONI, UID: 21BCS2245 \n");
 int i,j,temp,n;
  int *p;
  printf("Enter value of n: ");
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  printf("Enter values");
  for(i=0;i<n;i++)
    scanf("%d",&p[i]);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(p[i]>p[j])
      {
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
      }
    }
  }
  printf("Ascending order is as :\n");
  for(i=0;i<n;i++)
  printf("%dn",p[i]);
  free(p);
  return 0;
}