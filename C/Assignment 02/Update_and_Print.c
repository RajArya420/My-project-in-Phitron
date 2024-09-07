#include<stdio.h>
int main()
{
   int i,n,X,V;
   scanf("%d",&n);
   int ar[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&ar[i]);
   }
   scanf("%d%d",&X,&V);
   ar[X]=V;
   for(i=n-1; i>=0; i--)
    {
    printf("%d ",ar[i]);
   }
   return 0;
}

