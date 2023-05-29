#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        string age;
        Person(string name, int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    Person * rakib = new Person("rakib ahmed", 32);
    Person * sakib = new Person("sakib ahmed", 54);
    *rakib = * sakib;
    delete sakib;
    cout<<rakib->name<<", "<<rakib->age<<endl;
    return 0;
}