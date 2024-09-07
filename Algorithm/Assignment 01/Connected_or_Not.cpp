#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> mat(n,vector<int>(n,0));
    while(e--) 
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;  
    }
    int q;
    cin>>q;
    while(q--) 
    {
        int a,b;
        cin>>a>>b;
        if (a==b) 
        {
            cout<<"YES"<<endl;
        } 
        else if(mat[a][b]==1)
        cout<<"YES"<<endl;
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
