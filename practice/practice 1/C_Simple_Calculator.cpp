#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int summation = a+b;
    long long int multi = a * b;
    long long subtraction = a-b;
    cout<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<summation<<endl;
    cout<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" "<<multi<<endl;
    cout<<a<<" "<<"-"<<" "<<b<<" "<<"="<<" "<<subtraction<<endl;
    return 0;
}