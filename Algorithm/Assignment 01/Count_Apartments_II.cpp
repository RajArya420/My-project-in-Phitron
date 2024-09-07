#include<bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
char a[1001][1001];
int n,m;
bool valid(int i,int j) 
{
    return(i>=0&&i<n&&j>=0&&j<m&&!vis[i][j]&&a[i][j]=='.');
}
void bfs(int si,int sj,int &room) 
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty()) 
    {
        pair<int,int> par =q.front();
        q.pop();
        int ci=par.first;
        int cj=par.second;
        vector<pair<int, int>>path={{0,1},{0,-1},{-1,0},{1,0}};
        for(auto d:path) 
        {
            int ni=ci+d.first;
            int nj=cj+d.second;
            if(valid(ni,nj)) 
            {
                q.push({ni,nj});
                vis[ni][nj]=true;
                room++; 
            }
        }
    }
}
void countRooms(vector<int> &roomCounts) 
{
    for(int i =0;i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            if(a[i][j]=='.'&&!vis[i][j]) 
            {
                int room=0;
                bfs(i,j,room);
                roomCounts.push_back(room);
            }
        }
    }
    sort(roomCounts.begin(), roomCounts.end());
}
int main() 
{
    cin>>n>>m;
    for(int i=0;i<n;i++) 
    {
        for(int j =0;j<m;j++) 
        {
            cin>>a[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    vector<int> roomCounts;
    countRooms(roomCounts);
    for(int count : roomCounts) 
    {
        cout<<count+1<< " ";
    }
    if(roomCounts.empty())
     {
        cout<<"0";
    }
    cout<< endl;
    return 0;
}
