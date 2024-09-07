#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int t[n],m1[n],m2[n],d[n],d2[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&m1[i],&m2[i],&d[i]);
        d2[i] = (d[i]*m1[i])/(float)(m1[i]+m2[i]);
        t[i] = d[i] - d2[i];
    }
    for(i=0; i<n; i++)
        printf("%d\n",t[i]);
}