#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn1 = min(a,b);
    int mn = min(mn1,c);
    int mx1= max(a,b);
    int mx= max(mx1,c);
    cout<<mn<<" "<<mx;
    return 0;
}