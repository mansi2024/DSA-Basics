#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[]  = "WELCOME";
    int i;
    for(i=0; A[i]!='\0';i++)
    {
        A[i] = A[i]+32;
    }
    printf("%s",A);
}