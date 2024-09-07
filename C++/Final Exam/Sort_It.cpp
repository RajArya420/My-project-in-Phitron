#include<bits/stdc++.h>
using namespace std;
class student
{
   public:
     string name;
     int cls;
     char s;
     int id;
     int math;
     int eng;
     int sum;
};
bool cmp(student a,student b)
{
   if(a.sum!=b.sum)
   {
    return a.sum > b.sum;
   }
   return a.id<b.id;
}
int main()
{
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].name>>s[i].cls>>s[i].s>>s[i].id>>s[i].math>>s[i].eng;
    }
    for(int i=0;i<n;i++)
    {
        s[i].sum=(s[i].math+s[i].eng);
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<" "<<s[i].math<<" "<<s[i].eng<<endl;
    }
    return 0;
}