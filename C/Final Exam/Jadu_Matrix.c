#include<stdio.h>
int main()
{
   int r,c;
   scanf("%d %d",&r,&c);
   int flag=1;
   if(r!=c)
   {
    flag=0;
   }
   int arr[r][c];
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
   }
    for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
        if((i==j||i+j==r-1)&&arr[i][j]!=1)
        {
            flag=0;
            break;
        }
        if((i!=j&&i+j!=c-1)&&arr[i][j]!=0)
        {
            flag=0;
            break;
        }
    }
   }
   if(flag==1)
   {
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }
       
   return 0;
}


