#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v; type 1
    // vector<int> v(5); type 2
    // vector<int> v(5,10); type 3
    // vector<int> v2(5,100);
    // vector<int> v(v2);      type 4
    // int a[6]={10,20,30,40,50,60};
    // vector<int> v(a,a+6);  type 5
    vector<int> v={2,10,6}; //type 6
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}