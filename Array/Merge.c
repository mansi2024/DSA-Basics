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
struct Array* Merge(struct Array *arr1, struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr = (struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
           arr->A[k++]=arr1->A[i++];
        else
           arr->A[k++]=arr2->A[j++];

    }
    for(;i<arr1->length;i++)
       arr->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
       arr->A[k++]=arr2->A[j];
    arr->length = arr1->length+arr2->length;
    arr->size= 10;
    return arr;
}
int main()
{
    struct Array arr1 ={{3,5,9,14,20},10,5};
    struct Array arr2 ={{2,10,12,17,21},10,5};
    struct Array *arr;
    arr = Merge(&arr1,&arr2);
    Display(*arr);

}