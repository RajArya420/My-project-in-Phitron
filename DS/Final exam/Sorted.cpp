#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        list<int> mylist;
        for (int i = 0; i < n; i++) 
        {
            int val;
            cin >> val;
            mylist.push_back(val);
        }

        mylist.sort();
       

        for (int val : mylist) 
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
