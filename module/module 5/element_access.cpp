#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s[0]<<endl; //access the [i]th index of string
    cout<<s.at(0)<<endl; //access the [i]th index of string 
    cout<<s[s.size()-1]<<endl; //access the last element of string
    cout<<s.back()<<endl; //access the last element of string
    cout<<s.front()<<endl; //access the first element of string
    return 0;
}