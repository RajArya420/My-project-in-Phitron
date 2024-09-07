#include <stdio.h>

int main() {
   int n,s,k,d;
   scanf("%d",&n);
   s=n-1;
   k=1;
   
   for(int i=1;i<=n;i++)
   {   
       d=i;
       for(int j=1;j<=s;j++)
       {
           printf(" ");
       }
       for(int j=1;j<=k;j++)
       {
          
          
          printf("%d",d);
          d--;
       }
        
       
       s--;
       k=k+1;
       printf("\n");
   }    
    return 0;
}