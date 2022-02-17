#include <stdlib.h>
#include <stdio.h>
void swap(char *x,char *y)
{
    char temp;
    temp = *x;
     *x=*y;
     *y=temp;
}
void perm(char S[],int l,int h){
    int i;
    if(l==h)
      {
          printf("%s ",S);
      }
      else{
          for(i=l;i<=h;i++)
          {
              swap(&S[l],&S[i]);
              perm(S,l+1,h);
              swap(&S[l],&S[i]);
          }
      }
}
int main()
{
    char S[] = "ABC";
    perm(S,0,2);
}