#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
void bfs(int source,int des)
{
    queue<pair<int,int>> q;
    q.push({source,0});
    vis[source]=true;
    bool paisi=false;
    while(!q.empty())
    {
        pair<int,int>p =q.front();
        q.pop();
        int par=p.first;
        int level=p.second;
        if(par==des)
        {
            cout<<level<<endl;
            paisi=true;
        }
        // cout<<par<<endl;
        for(int child: v[par])
        {
           if(vis[child]==false)
           {
            q.push({child,level+1});
            vis[child]=true;
            
           }
        }
    }
    if(paisi==false)
    {
        cout<<-1<<endl;
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a, b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int source;
    cin>>source;
    memset(vis,false,sizeof(vis));
   
    bfs(source,6);
    
    return 0;
}