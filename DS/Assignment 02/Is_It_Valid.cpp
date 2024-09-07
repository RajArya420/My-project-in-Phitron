#include<bits/stdc++.h>
using namespace std;

class myStack 
{
public:
    bool remove(string s) 
    {
        stack<char> s1;

        for (char c:s) 
        {
            if (c=='0') 
            {
                if (!s1.empty()&&s1.top()=='1') s1.pop();
                else s1.push(c);
            } 
            else 
            {
                if (!s1.empty()&&s1.top() == '0')s1.pop();
                else s1.push(c);
            }
        }

        return s1.empty();
    }
};

int main() 
{
    int T;
    cin >> T;
    myStack st;
    while (T--) 
    {
        string S;
        cin >> S;
        bool remove = st.remove(S);
        if (remove) 
        {
            cout << "YES"<<endl;
        } 
        else 
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
