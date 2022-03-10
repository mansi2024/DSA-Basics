#include <stdlib.h>
#include <stdio.h>

void InsertionSort(int A[] , int n)
{
    int j,x;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        x = A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main()
{
    int A[] = {4,8,2,3,10,0};
    int n = 6;
    int i;
    InsertionSort(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}