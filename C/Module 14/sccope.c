#include<stdio.h>
int x=500;
void fun(void)
{
    //printf("Fun er x er address - %p\n",&x);
}
int main()
{
//    printf("Main er x er address - %p\n",&x);
int y=100;
for(int i=0;i<5;i++)
{
    printf("%d\n",y);
}
   return 0;
}