#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student rahim; // Create an object of Student
    rahim.roll=29; // Access attributes and set values
    rahim.cls=9;
    rahim.section='A';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);

    cout<<rahim.roll;
    return 0;
}