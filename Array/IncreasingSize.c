#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p,*q;
    p = (int*)malloc(5*sizeof(int));
    p[0]=3;p[1]=7;p[2]=6;p[3]=9;p[4]=5;

    q = (int*)malloc(10*sizeof(int));
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];

    }
    free(p);
    p=q;
    q=NULL;
    p[5]=2;
    for(int i=0;i<7;i++)
    {
      printf("%d ",p[i]);
    }
}
