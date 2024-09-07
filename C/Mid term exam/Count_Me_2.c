#include<stdio.h>
#include<string.h>
int main()
{  
    int i,small=0,capital=0,digit=0;
  char ar[100001];
  scanf("%s",ar);
  for( i=0;i<strlen(ar);i++)
  {
      if(ar[i]>'a')
     {
      capital++;
     }
     
    
  }
  printf("%d",capital);
   return 0;
}