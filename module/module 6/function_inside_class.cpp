#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string nm, int a, int ma1, int ma2)
        {
            name=nm;
            age=a;
            mark1=ma1;
            mark2= ma2;
        }
        void hello()
        {
            cout<<name<<", "<<age<<endl;
        };
        int mark()
        {
            return mark1+mark2;
        };
};
int main()
{
    Person rakib("Rakib Hasan", 34, 45,67);
    // rakib.hello();
    cout<<rakib.mark()<<endl;
    return 0;
}