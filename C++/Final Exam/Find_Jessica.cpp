#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    
    getline(cin,s);
    // string b= "Jessica ";
    stringstream ss(s);
    string word;
    int flag=0;
    while(ss>>word)
    {
        if(word== "Jessica" )
        {
            flag=1;
            
        }
        
    }
    if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO";
        }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     string itrt;
//     string word="Jessica "; 
//     while (ss >> itrt)
//     {
        
//         if(itrt==word)
//         {
//             cout<<"YES";
//         }
//         else
//         {
//             cout<<"NO";
//         } 
//     }
     
//     return 0;
// }