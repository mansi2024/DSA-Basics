#include <stdio.h>
#include <stdlib.h>

struct Array 
{ 
    int A[10];
    int size;
    int length;
};
int Get(struct Array arr,int index)
{
    if(index>=0 && index<arr.length)
    {
       return arr.A[index];
    }
    return -1;
}
void Set(struct Array *arr,int index,int x)
{
    if(index>=0 && index<arr->length)
      arr->A[index]=x;
}
int Max(struct Array arr)
{
   int Max = arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>Max)
          Max = arr.A[i];
    }
    return Max;
}
int Sum(struct Array arr)
{
    int Total = 0;
    for(int i=0;i<arr.length;i++)
    {
       Total+=arr.A[i];
    }
    return Total;
}
void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

int main()
{
    struct Array arr = {{3,6,7,9,4},10,5};
    printf("%d\n",Get(arr,1));
    printf("%d\n",Max(arr));
    printf("%d\n",Sum(arr));
    Set(&arr,2,5);
    Display(arr);
    
}