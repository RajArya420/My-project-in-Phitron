#include<stdio.h>
void fun(int x)
{
    x=200;
    //printf("%p\n",&x);
}
int main()
{
   int x = 100;
   //printf("%p\n",&x);
   fun(x);
   printf("%d",x);
   return 0;
}