#include<bits/stdc++.h>
using namespace std;
class person
{
   public:
     string name;
     int age;
     person(string name,int age)
     {
        this->name =name;
        this->age=age;
     }
};
int main()
{
    person rakib("Rakib Ahsan",24);
    cout<<rakib.name<<" "<<rakib.age;
    return 0;
}