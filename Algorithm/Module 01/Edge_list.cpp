#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v;
    while(e--)
    {
        int a,b; cin>>a>>b;
        v.push_back({a,b}); // make_pair(a,b);
    }
    for(auto p: v) // pair<int,int> p: v
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}