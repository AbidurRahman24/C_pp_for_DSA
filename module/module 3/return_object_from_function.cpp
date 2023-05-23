#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r, int c, int s, char * n)
        {
            roll =r;
            cls=c;
            section=s;
            strcpy(name,n); 
        }
};
Student fun()
{
    char name[100]="Rahim Ullah";
    Student r(29,7,'C',name);
    return r;
}
int main()
{
    Student karim = fun();
    // Student rahim(49, 7, 'D', "Karim Uddin");


    // cout<<rahim.roll<<endl;
    cout<<karim.roll;
    return 0;
}