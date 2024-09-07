#include<stdio.h>
int main()
{
   int x=10;
   //printf("%p\n",&x);//address koi tumar
   int* p=&x;//address ber korlam
   printf("%p\n",p);//address print korlam
   printf("%d\n",*p);//value access
   *p=500;
   printf("%d\n",x);
   return 0;
}