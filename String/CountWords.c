#include <stdlib.h>
#include <stdio.h>

int main()
{
    char A[] = "How are You";
    int i,word=1;
    for(i=0;A[i]!='\0';i++){
        if(A[i]==' ' && A[i-1]!=' ')
         word++;
    }
    printf("%d ",word);
}