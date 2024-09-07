#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);
  if(ch=='Z'||ch=='z')
   {
    printf("a\n");
   }
   else if(ch<'z')
   { 
    ch=ch+1;
    printf("%c\n",ch);
    
   }
   else if(ch<'Z')
   {
    ch=ch+1;
    printf("%c\n",ch);
   }
   
   
   return 0;
}