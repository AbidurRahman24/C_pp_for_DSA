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
    Person * rahim = new Person("Rahim Uddin", 55.32, 22);
    cout<<rahim->name<<endl;
    cout<<rahim->height<<endl;
    cout<<rahim->age<<endl;
    return 0;
}