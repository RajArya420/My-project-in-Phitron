#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int> adj[N];
bool pathVisit[N];
bool ans=false;
void dfs(int parent)
{
    vis[parent]=true;
    pathVisit[parent]=true;
    for(int child:adj[parent])
    {
        if(pathVisit[child])
        {
            ans=true;
        }
        if(!vis[child])
        {
            dfs(child);
        }
    }
    pathVisit[parent]=false;
}
int main()
{
    int main()
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(pathVisit,false,sizeof(pathVisit));
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(ans) cout<<"detected"<<endl;
    else cout<<"Not"<<endl;
    return 0;
}