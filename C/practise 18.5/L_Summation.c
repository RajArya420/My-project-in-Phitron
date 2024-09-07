#include<stdio.h>
void fun(int arr[],int n)
{
  long long int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  printf("%lld",sum);
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   fun(arr,n);
   return 0;
}