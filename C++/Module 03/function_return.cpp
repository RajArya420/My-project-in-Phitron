#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  int roll;
  int clss;
  double gpa;
  Student(int roll,int clss,double gpa)
  {
    this->roll=roll;
    this->clss=clss;
    this->gpa=gpa;
  }
};
Student* fun()
{
    Student* Rahim=new Student(35,9,4.99);
    
    return Rahim;
}
int main()
{
    Student* ans=fun();
    cout<<ans->roll<<" "<<ans->clss<<" "<<ans->gpa<<endl;
    delete ans;
    return 0;
}