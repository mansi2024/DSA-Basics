#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[] = "madam";
    char B[6];
    int i,j;
    for(i=0;A[i]!=0;i++){

    }
    i=i-1;
    for(j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    B[j]='\0';
    for(i=0,j=0; A[i]!=0 && B[j]!=0 ; i++,j++){
        if(A[i]!=B[j])
         break;
    }
    if(A[i]==B[j])
     printf("it's a Palindrome");
    else
     printf("Not a Palindrome");
}