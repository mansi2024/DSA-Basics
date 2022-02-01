#include <stdlib.h>
#include <stdio.h>

struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    printf("Displaying array\n");
   for(int i=0;i<arr.length;i++)
   {
        printf("%d \n",arr.A[i]);
   }
}
int main()
{
    struct Array arr;
    int n,i;
    printf("Enter size of an array");
    scanf("%d",&arr.size);
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length = 0;
    printf("Enter the number of numbers");
    scanf("%d",&arr.length);
    printf("Enter the numbers");
    for(i=0;i<arr.length;i++)
    {
        scanf("%d ",&arr.A[i]);
    }
    Display(arr);

}