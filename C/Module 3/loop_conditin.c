#include<stdio.h>
int main()
{ 
    int i;
    for(i=1;i<=5;i=i+1)
    { 
        if(i%2==0)
        {
            printf("%d - EVEN\n",i);
        } 
        else
        printf("%d - ODD\n",i);   
    }
    
    return 0;
}