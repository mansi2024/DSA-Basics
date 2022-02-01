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
    struct Array arr = {{3,5,7,9},8,4};
    Display(arr);

}