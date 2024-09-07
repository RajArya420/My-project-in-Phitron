#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    student(string name,int roll)
    {
        this->name = name;
        this->roll= roll;
    }
};

class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.name!=b.name)  return a.name > b.name;
        return a.roll < b.roll;
    }
};

int main()
{
    int t;
    cin >> t;
    priority_queue<student,vector<student>,cmp> pq;
    while(t--)
    {
        string name;
        int roll;
        cin>>name>>roll;
        student obj(name,roll);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<endl;
        pq.pop();
    }

    
}