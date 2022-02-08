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
void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    {
    while(arr->A[i]<0)i++;
    while(arr->A[j]>=0)j--;
    if(i<j)
    {
        int temp = arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j] = temp;
    }
    }
}
int main()
{
    struct Array arr1 = {{-3,8,4,6,-7,9,3,-8,-12},10,9};
    printf("%d\n",arr1.A[0]);
    Rearrange(&arr1);
    Display(arr1);

}