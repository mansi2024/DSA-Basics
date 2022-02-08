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
void LeftShift(struct Array *arr)
{
   
    for(int i=0;i<=arr->length-2;i++)
    {
        arr->A[i] = arr->A[i+1];
    }
     arr->A[arr->length-1] = 0;
}
void LeftRotate(struct Array *arr)
{
    int temp = arr->A[0];
    for(int i=0;i<=arr->length-2;i++)
    {
        arr->A[i] = arr->A[i+1];
    }
     arr->A[arr->length-1] = temp;
}
int main()
{
    struct Array arr = {{5,8,9,4,3},10,5};
    LeftRotate(&arr);
    Display(arr);
}