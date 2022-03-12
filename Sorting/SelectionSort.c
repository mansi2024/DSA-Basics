#include <stdlib.h>
#include <stdio.h>
void Swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int A[],int n)
{
    int j,k;
    for(int i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
           
        }
         Swap(&A[i],&A[k]);
    }
}
int main()
{
    int A[] = {4,6,2,3,0,12,19};
    int n=7;
    selectionSort(A,n);
    for(int i=0;i<7;i++)
    {
        printf("%d ",A[i]);

    }

}