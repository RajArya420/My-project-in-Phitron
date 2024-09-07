#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib Namespace"<<endl;
    }
}
namespace Sakib
{
    int age=26;
    void hello()
    {
        cout<<"Sakib NAmespace"<<endl;
    }
}
using namespace Rakib;
int main()
{
    cout<<age<<endl;
    hello();
    Sakib::hello();
    return 0;
}