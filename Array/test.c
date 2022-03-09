#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p,i,n,j=0;
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    
    int count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            
            p[j]=i;
            j++;
            count++;
            
        }
    }
   
    printf("%d\n",count);
    for(j=0;j<count;j++){
        printf("%d ",p[j]);
    }
}