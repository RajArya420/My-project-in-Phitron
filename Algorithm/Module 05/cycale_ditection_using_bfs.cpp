#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int> adj[N];
int parrentArray[N];
bool ans;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        int parrent=q.front();
        // cout<<parent<<endl;
        q.pop();
        for(int child:adj[parrent])
        {
            
                if(vis[child]==true && parrentArray[parrent]!=child)
                {
                    ans=true;
                }
                if(!vis[child])
                {
                    vis[child]=true;
                    parrentArray[child]=parrent;
                    q.push(child);
                }
                
            
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
            bfs(i);
        }
    }
    if(ans) 
    cout<<"Cycle Found"<<endl;
    else
     cout<<"Not Found"<<endl;
    return 0;
}