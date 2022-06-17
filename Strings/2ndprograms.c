// WAP of fibonacci program using recursion.

#include <stdio.h>
#include <conio.h>

int fib(int g)
{
  if (g == 0)
  {
    return 0;
  }

  if (g == 1)
  {
    return 1;
  }
  return fibo(g - 1) + fibo(g - 2);
}

int main(void)
{
  int g;
  printf("Calculated Fibonacci\n");
  for (g = 0; g < 10; g++)
  {
    printf("%d \t ", fibo(g));
  }
  getch();
  return 0;
}