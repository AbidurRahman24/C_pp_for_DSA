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
    Student rahim;
    rahim.cls =9;
    rahim.roll=34;
    rahim.section ='A';
    char nm[100] = "Rahim ullah";
    strcpy(rahim.name, nm);

    Student karim;
    karim.cls =3;
    karim.roll=334;
    karim.section ='A';
    char nm2[100] = "karim ullah";
    strcpy(karim.name, nm2);


    cout<<karim.roll;
    return 0;
}