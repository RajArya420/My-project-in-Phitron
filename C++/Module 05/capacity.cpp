#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="Hello world";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    string s;
    cin>>s;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11,'X');
    cout<<s<<endl;
    return 0;
}