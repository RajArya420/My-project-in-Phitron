#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int> adj[N];
int parrentArray[N];
bool ans;
void dfs(int parent)
{
    vis[parent]=true;
    for(int child:adj[parent])
    {
        if(vis[child]&&child!=parrentArray[parent])
        {
            ans=true;
        }
        if(!vis[child])
        {
           
            parrentArray[child]=parent;
             dfs(child);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parrentArray,-1,sizeof(parrentArray));
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    
    if(ans) 
    cout<<"Cycle Found"<<endl;
    else
     cout<<"Not Found"<<endl;
    return 0;
}