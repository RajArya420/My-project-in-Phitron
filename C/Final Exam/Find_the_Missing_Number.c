#include<stdio.h>
int main()
{
   long long int t;
   scanf("%lld",&t);
   for(int i=0;i<t;i++)
   {
    long long int m,a,b,c;
    
     scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
     long long int d=a*b*c;
     long long int r=m/d;
     long long int t=r*d;
     if(t==m)
     {
        printf("%lld\n",r);
     }
     else{
        printf("-1\n");
     }
     
     
   }
   return 0;
}