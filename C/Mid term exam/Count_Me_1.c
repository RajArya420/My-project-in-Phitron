#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   int sum1=0,sum2=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]%2==0&&a[i]%3==0)
    {
      sum1=sum1+1;
    }
    else if(a[i]%2==0)
    {
        sum1=sum1+1;
    }
    else if(a[i]%3==0)
    {
        sum2=sum2+1;
    }
   }
   printf("%d %d",sum1,sum2);
   return 0;
}