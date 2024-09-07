#include<stdio.h>
int main()
{
   int x=100;
   int*ptr=&x;
   x=200;
//    *ptr=200;
   //x-> *ptr
   printf("x er value - %d",*ptr);
   return 0;
}