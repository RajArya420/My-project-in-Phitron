#include<bits/stdc++.h>
using namespace std;
class person
{
      public:
         string name;
         int age;
         person(string name,int age)
         {
            this->name=name;
            this->age=age;
         }
};
int main()
{
    person* rakib=new person("Rakib Islam",23);
    person* sakib=new person("Sakib Alam",25);
    *rakib=*sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}