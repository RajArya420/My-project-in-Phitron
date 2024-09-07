#include<bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
int dis[1001][1001];
char a[1001][1001];
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int i,int j) 
{
    return(i>=0&&i<n&& j>=0&&j<m);
}
void bfs(int si,int sj) 
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0; 
    while (!q.empty()) 
    {
        pair<int,int>par=q.front();
        q.pop();
        for (int i = 0; i < 4; i++) 
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (a[ci][cj] == '.' || a[ci][cj] == 'A' || a[ci][cj] == 'B')) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second]+1;
            }
        }
    }
}
int main() 
{
    cin>>n>>m;
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            cin >> a[i][j];
        }
    }
    int si=0,sj=0;
    int ei=0,ej=0;
    for (int i=0; i<n; i++) 
    {
        for (int j=0;j<m;j++) 
        {
            if (a[i][j]=='A') 
            {
                si = i;
                sj = j;
            } 
            else if (a[i][j]=='B') 
            {
            ei = i;
            ej = j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    bfs(si,sj);
    if (vis[ei][ej]) 
    {
        cout <<"YES"<< endl;
    } 
    else 
    {
        cout <<"NO"<< endl;
    }
    return 0;
}
