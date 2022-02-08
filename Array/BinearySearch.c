#include <stdlib.h>
#include <stdio.h>

struct Array
{
   int A[20];
   int size;
   int length;
};
void Display(struct Array arr)
{
    printf("Elements are\n");
    for(int i=0;i<arr.length;i++)
    {
       printf("%d ",arr.A[i]);
    }
}
int BinearySearch(struct Array arr,int key)
{
    int m,l,h;
    l=0;
    h=arr.length-1;
   
    while(l<=h)
    {
        m=(l+h)/2;
        if(key==arr.A[m])
           return m;
        else if(key<arr.A[m])
           h=m-1;
        else
           l = m+1;
    }
    return -1;
}
int RBinSearch(int a[],int l,int h,int key)
{
    int mid;
   
    if(l<=h)
    {
        mid = (l+h)/2;
        if(key==a[mid])
           return mid;
        else if(key<a[mid])
           return RBinSearch(a,l,mid+1,key);
        else
           return RBinSearch(a,mid-1,h,key);
    }
    return -1;
}

int main()
{
    struct Array arr1 = {{2,3,9,16,18,21,28,32,35},10,9};
    printf("%d\n",BinearySearch(arr1,10));
   // printf("%d\n",RBinSearch(arr.A,0,arr.length,8));//
    Display(arr1);

}