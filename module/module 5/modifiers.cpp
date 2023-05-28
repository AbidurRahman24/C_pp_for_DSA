#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "world";
    // a+=b; //append another string
    // a.append(b); //append another string
    // cout<<a<<endl;

    // a="HelloA";
    // a=a+"A";
    a.push_back('A'); //the last element of the string
    cout<<a<<endl;
    a.pop_back(); //remove the last charecter of the string;
    cout<<a<<endl;

 
    a="world";  //assign string
    a.assign("world"); //assign string
    cout<<a<<endl;

    string c="HelloWorld";
    // c.erase(4,3); //erase character from the string //output ->Hellrld

    cout<<c<<endl;
    c.replace(5,0,"so"); //replace a portion of the string
    cout<<c<<endl;

    c.insert(5,"Niloy"); //insert a portion to a specific position.

    cout<<c<<endl;
    return 0;
}