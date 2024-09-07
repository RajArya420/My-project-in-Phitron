#include<stdio.h>
int main()
{
   double x=5.26;
   double*ptr=&x;
   *ptr=100.25;
   printf("x er value - %.2lf\n",x);
   printf("x er address - %p\n",&x);
   printf("x er value - %.2lf\n",*ptr);


   return 0;
}