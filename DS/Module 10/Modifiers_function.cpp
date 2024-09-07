#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30};
    // mylist.push_front(100);
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(),2),100);
    // mylist.erase(next(mylist.begin(),2));
    mylist.insert(next(mylist.begin(),2),{100,200,300});
    for(int val:mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}