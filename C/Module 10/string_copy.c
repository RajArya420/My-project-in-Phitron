#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100];
   int i;
   scanf("%s %s",a,b);
   strcpy(a,b);//short cut
//    for(i=0;i<=strlen(b);i++)
//    {
//     a[i]=b[i];
//    }
   printf("%s %s",a,b);;
   return 0;
}