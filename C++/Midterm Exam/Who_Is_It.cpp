#include<bits/stdc++.h>
using namespace std;
class student
{
   public:
    int id;
    char name[100];
    char s;
    int mark;   
};
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       student a,b,c;
       cin>>a.id>>a.name>>a.s>>a.mark;
       getchar();
        cin>>b.id>>b.name>>b.s>>b.mark;
       getchar();
        cin>>c.id>>c.name>>c.s>>c.mark;
       if(a.mark>=b.mark && a.mark>=c.mark)
       {
        cout<<a.id<<" "<<a.name<<" "<<a.s<<" "<<a.mark<<endl;
       }
       else if(b.mark>=a.mark && b.mark>=c.mark)
       {
        cout<<b.id<<" "<<b.name<<" "<<b.s<<" "<<b.mark<<endl;
       }
       else 
       {
        cout<<c.id<<" "<<c.name<<" "<<c.s<<" "<<c.mark<<endl;
       }
       
    }
    return 0;
}