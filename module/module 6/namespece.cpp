#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age =30;
    void hello()
    {
        cout<<"rakib"<<endl;
    }
};

namespace Sakib
{
    int age =43;
    void hello()
    {
        cout<<"Sakib"<<endl;
    }
};
using namespace Rakib;
using namespace Sakib;
int main()
{
    cout<<Sakib::age<<endl;
    return 0;
}