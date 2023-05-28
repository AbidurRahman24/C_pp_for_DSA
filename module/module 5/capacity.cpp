#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World in C++";
    int sz = s.size(); //the size of the string
    int mxsz = s.max_size(); //the maximum size string can hold
    int cap = s.capacity(); //current avaible capacity of the string
    
    cout<<sz<<endl;
    cout<<mxsz<<endl;
    cout<<cap<<endl;
    s.clear(); //clear the string
    cout<<s<<endl;
    if(s.empty() == true) cout<<"Empty"; //true/false is string is empty
    else cout<<"didn't empty";
    cout<<s<<endl;

    string r;
    cin>>r;
    // r.resize(6); //change the size of string
    cout<<r<<endl;
    s.resize(15,'X'); 
    cout<<r<<endl;

    return 0;
}