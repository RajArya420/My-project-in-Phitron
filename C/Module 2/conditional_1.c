#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox's bajar jabo\n");
        if(tk>=10000)
        {
            printf("Saint martin jabo\n");
        }
        else
        {
            printf("Ferot chole asbo\n");
        }
    }
    else
    {
        printf("kothaw jabo na");
    }
    return 0;
}