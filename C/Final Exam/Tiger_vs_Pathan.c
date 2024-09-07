#include<stdio.h>
#include<string.h>
int main()
{
   int test;
   scanf("%d",&test);
   for(int i=0;i<test;i++)
   {
    int n;
    scanf("%d",&n);
    char r[100001];
    scanf("%s",r);
    int tc=0;
    int pc=0;
    for(int i=0;i<strlen(r);i++)
    {
        if(r[i]=='T')
        {
            tc++;
        }
        else
        {
            pc++;
        }
    }
    if(tc>pc)
    {
        printf("Tiger\n");
    }
    else if(tc<pc)
    {
        printf("Pathaan\n");
    }
    else
    {
        printf("Draw\n");
    }
   }
   return 0;
}