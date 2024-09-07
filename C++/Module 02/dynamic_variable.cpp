#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int *p=new int;
    cout<<"Fun : "<<p<<endl;
    *p=100;
    return p;
}
int main()
{
    int *b= fun();
    
    cout<<"Main : "<<*b;
    return 0;
}