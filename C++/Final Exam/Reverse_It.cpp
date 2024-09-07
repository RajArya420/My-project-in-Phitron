#include<bits/stdc++.h>
using namespace std;
class student
{
  public:
     string nm;
     int cls;
     char s;
     int id;
  
};
int main()
{
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].nm>>s[i].cls>>s[i].s>>s[i].id;
    }
    for(int i=0;i<n/2;i++)
    {
        swap(s[i].s,s[n-i-1].s);
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<endl;
    }
    return 0;
}