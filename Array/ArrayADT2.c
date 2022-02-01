#include <stdio.h>
#include <stdlib.h>

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
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
       arr->A[arr->length++]=x;
}
void Insert(struct Array *arr,int index,int x)
{
    if(index>=0 && index<=arr->length)
    {
       for(int i=arr->length;i>index;i--)
         arr->A[i]=arr->A[i-1];
      arr->A[index]=x;
      arr->length++;
    }
}
int LinearSearch(struct Array arr,int key)
{
    for(int i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
          return i;
    }
    return -1;
}
int Delete(struct Array *arr,int index)
{
    if(index>=0 && index<arr->length)
    {
        int x = arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;

}
int main()
{
    struct Array arr = {{3,5,7,9},8,4};
    Append(&arr,2);
    Insert(&arr,2,1);
    Delete(&arr,1);
    Display(arr);
    printf("\n%d ",LinearSearch(arr,0));
}