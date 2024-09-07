#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,e;
    cin>>n>>e;
    vector<int> mat[n];
    while(e--) 
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--) 
    {
        int x;
        cin>>x;
        vector<int> connect=mat[x];
        if (connect.empty()==true) 
        {
            cout <<-1<<endl;
        }
         else 
         {
            sort(connect.begin(),connect.end(),greater<int>());
            for (auto x:connect) 
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
