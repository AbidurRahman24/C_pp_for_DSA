#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        char name[100];
        float height;
        int age;
        Person(char *n, float h, int a)
        {
            strcpy(name,n);
            height= h;
            age= a;
        }
};
int main()
{
    Person * rahim = new Person("Rahim Uddin", 55.3, 22);
    Person * karim = new Person("Karim Ullah", 60.3, 24);
    if (rahim->age > karim->age)
    {
        cout<<"Greater: " << rahim->name <<endl;
    }
    else if( rahim->age < karim->age)
    {
        cout<<"Greater: " << karim->name <<endl;
    }
    else
    {
        cout<<"Both are same age."<<endl;
    }
    return 0;
}