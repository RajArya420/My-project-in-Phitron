#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100];
   scanf("%s %s",a,b);
   int v=strcmp(a,b);
   if(v<0)                //1= B choto 0=same -1=A choto
   {
    printf("A smaller");
   }
   else if(v>0)
   {
    printf("B smaller");
   }
   else{
    printf("Same");
   }
   return 0;
}