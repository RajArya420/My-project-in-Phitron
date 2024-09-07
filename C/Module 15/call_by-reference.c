#include<stdio.h>
void fun(int *p)
{ 
    //printf("%d\n",*p);
    *p=500;
}
int main()
{
   int x=10;
   fun(&x);
   printf("%d\n",x);

   return 0;
}