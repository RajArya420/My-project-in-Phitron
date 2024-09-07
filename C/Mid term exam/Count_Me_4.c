#include<stdio.h>
int main()
{
    char c;
    int ct[26]={0};
    while(scanf("%c",&c) != EOF)
    {
        ct[c-'a']++;
    }
    for(char i='a';i<='z';i++)
    {   
        if(ct[i-'a']>0)
        {
        printf("%c - %d\n",i,ct[i-'a']);
        }
    }
    return 0;
}