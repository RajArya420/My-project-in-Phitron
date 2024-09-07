#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
        int roll;
        int cls;
        int gpa;
    Student(int roll,int cls,int gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
    Student Rahim(02,9,5.01);
    Student Karim(03,9,4.33);
    cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
    cout<<Karim.roll<<" "<<Karim.cls<<" "<<Karim.gpa<<endl;

    return 0;
}