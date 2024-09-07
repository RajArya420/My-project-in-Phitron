#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=0;
    for(int i=0;i<t;i++)
    {
        string s,x;
        cin>>s;
        cin>>x;
        int search= s.find(x);
        while(search != -1)
        {
        
                 s.replace(search,x.length(),"#");
                 
                 search=s.find(x,search+1);
                
                 
        }
              
              
        cout<<s<<endl;
    }
    return 0;
}