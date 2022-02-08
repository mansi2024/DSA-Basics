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
int main()
{
    struct Array arr1 = {{2,3,9,16,24,21,28,32,35},10,9};
    printf("%d\n",isSort(arr1));
    Display(arr1);

}
int isSort(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])
         return 0;
    }
    return 1;
}

