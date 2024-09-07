#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string num;
        cin>>num;
        stack<char> St;
        for (char c:num)
        {
            if (!St.empty())
            {
                if (St.top()=='0'&&c=='1')
                {
                    St.pop();
                }
                else
                {
                    St.push(c);
                }
            }
            else
            {
                St.push(c);
            }
        }
        if (St.empty()==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}