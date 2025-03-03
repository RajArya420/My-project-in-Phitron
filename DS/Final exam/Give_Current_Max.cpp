#include <bits/stdc++.h>
using namespace std;
class Student 
{
  public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks) 
    {
        this->name= name;
        this->roll= roll;
        this->marks= marks;
    }
};

class cmp 
{
   public:
    bool operator()(Student a, Student b) 
    {
        if (a.marks!=b.marks)
        return a.marks<b.marks;
        return a.roll>b.roll;
    }
};

int main() 
{
    int n;
    cin>>n;
    vector<Student>students;
    priority_queue<Student,vector<Student>,cmp> pq;
    for (int i=0;i<n;i++) 
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        students.push_back(obj);
        pq.push(obj);
    }
    int q;
    cin>>q;
    while (q--) 
    {
        int c;
        cin>>c;
        if (c==0) 
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            students.push_back(obj);
            pq.push(obj);

            if (!pq.empty())
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else
            cout<<"Empty"<<endl;
        } 
        else if(c == 1) 
        {
            if (!pq.empty())
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else
            cout<<"Empty"<<endl;
        } 
        else if (c== 2) 
        {
            if (!pq.empty()) 
            {
                pq.pop();
                if (!pq.empty())
                cout << pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                else
                cout<<"Empty"<<endl;
            } 
            else 
            {
                cout<<"Empty"<<endl;
            }
            // else
            //     {
            //         cout<<pq.top()<<endl;
            //     }
        }
    }

    return 0;
}
