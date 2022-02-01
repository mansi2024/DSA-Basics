#include <stdlib.h>
#include <stdio.h>

int Power(int m,int n)
{
    if(n==0)
     return 1;
    else 
      return Power(m,n-1)*m;
}
int main()
{
    int r = Power(3,4);
    printf("%d ",r);
}