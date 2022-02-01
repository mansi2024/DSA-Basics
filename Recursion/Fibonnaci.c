#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n<=1)
      return n;
    else
      return fib(n-2)+fib(n-1);
}

int main()
{
    printf("%d ",fib(8));
    return 0;
}