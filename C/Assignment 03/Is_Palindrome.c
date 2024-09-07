/* for(i = length-1; i>=0; i--)
    {
        string2[length - i - 1] = string1[i];
    }

    for(i = 0; i<length; i++)
    {
        if(string1[i] != string2[i])
            flag = 1;
*/

#include<stdio.h>
#include<string.h>
int is_palindrome(char arr[])
{

   int i=0,length=0,flag=0;
    char s[1001];
    strcpy(s,arr);
    while(arr[i] !='\0')
    {
        length++;
        i++;
    }
    for(i = length-1; i>=0; i--)
    {
        s[length - i - 1] = arr[i];
    }

    for(i = 0; i<length; i++)
    {
        if(arr[i] != s[i])
            flag = 1;
    }
    if(flag==0)
    {
       return 1;

    }
    else
    {
        return 0;

    }

}
int main()
{


    char arr[1001];
    scanf("%s",arr);
   int result = is_palindrome(arr);


    if(result==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return  0;
}