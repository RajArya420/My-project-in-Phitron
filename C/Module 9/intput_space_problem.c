// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char a[19];
//    gets(a);//built in function
//    printf("%s",a);
//    return 0;
// } 
#include<stdio.h>
int main()
{
   char a[19];
   fgets(a,19,stdin);//array name and size with +1(null),input
   printf("%s",a);
   return 0;
}