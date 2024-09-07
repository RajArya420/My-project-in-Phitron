#include<stdio.h>
#include<string.h>
void fun(int ar[])
{
    printf("%d",strlen(ar));
}
int main()
{
   char ar[20]="hello";
   fun(ar);
   return 0;
}