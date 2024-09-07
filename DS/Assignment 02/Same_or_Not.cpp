#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n,m,j,k;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!st.empty()&&!q.empty())
    {
       if(st.top()==q.front())
       {
            st.pop();
            q.pop();
        
       }
       else
       {
            cout<<"NO";
        return 0;
       }
       
    }
    if(q.empty()&&st.empty())
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}