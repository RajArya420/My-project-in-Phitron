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

int main()
{
    Student* Karim=new Student(22,9,4.99);
    cout<<Karim->roll<<" "<<Karim->clss<<" "<<Karim->gpa<<endl;
    return 0;
}