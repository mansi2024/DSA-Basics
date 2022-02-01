#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};
void Swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
int LinearSearch(struct Array *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
          Swap(&arr->A[i],&arr->A[i-1]);
          return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{7,6,4,2},9,8};
    printf("%d\n",LinearSearch(&arr,4));
    Display(arr);
    return 0;
}
