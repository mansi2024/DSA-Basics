#include <stdlib.h>
#include <stdio.h>

int Power(int m,int n)
{
    if(n==0)
      return 1;
    else if(n%2==0)
        return Power(m*m,n/2);
    else
       return m*Power(m*m,(n-1)/2);
}
int main()
{
    int r = Power(2,5);
    printf("%d ",r);
}