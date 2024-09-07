#include<stdio.h>
int main()
{
   int T;
   scanf("%d",&T);
   for(int t=0;t<T;t++)
   {
    int n,item;
     scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&item);
    for(int i=0;i<n;i++)
    {
        if(ar[i]==item)
        {   
            
            printf("YES\n");
            break;
        }
        else if(i==n-1)
        {   
           
            printf("NO\n");
            break;
        }
    }
    
   }
   return 0;
}