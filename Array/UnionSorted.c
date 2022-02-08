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
    for(int i=0;i<arr.length;i++){
       printf("%d ",arr.A[i]);
    }
}
struct Array* Union(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *new = (struct Array*)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            new->A[k++]=arr1->A[i++];
        }
        else if(arr1->A[i]>arr2->A[j]){
            new->A[k++]=arr2->A[j++];
        }else
        {
           new->A[k++]=arr1->A[i++];
           j++;
        }
    }
    for(;i<arr1->length;i++)
      new->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
      new->A[k++]=arr2->A[j];

      new->length = k;
      new->size=20;
      return new;
}
struct Array* Intersection(struct Array *arr1, struct Array *arr2)
{   
    int i,j,k;
    i=j=k=0;
    struct Array *new = (struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
          i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
               j++;
        }
        else if(arr1->A[i]==arr2->A[j]){
            new->A[k++]=arr1->A[i++];
            j++;
        }
    }
    new->length = k;
    new->size=10;
    return new;

}
struct Array* Difference(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *new = (struct Array*)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            new->A[k++]=arr1->A[i++];
        }else if(arr2->A[j]<arr1->A[i]){
            j++;
        }else
          {
              i++;
              j++;
          }
    }
    new->length= k;
    new->size = 10;
}
int main()
{
    struct Array arr1 = {{2,4,6,9,10},10,5};
    struct Array arr2 = {{3,4,8,10,17},10,5};
    struct Array *arr;
    struct Array *new;
   
   
     
     arr = Difference(&arr1,&arr2);
     Display(*arr);
    
}