#include<bits/stdc++.h>
using namespace std;
class student
{
public:
   string name;
   int roll;
   int mark;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    student mn;
    mn.mark=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].mark<mn.mark)
        {
            mn=a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.mark<<endl;
    return 0;
}