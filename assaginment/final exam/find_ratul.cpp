// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     cin.ignore();
//     if(s.find("Ratul") != -1) {
//         cout<<"YES"<<endl;
//     } else {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string word;
    int flag =1;
    while(ss >> word)
    {
       if(word == "Ratul"){
        flag=0;
        break;
    }
    }
    if (flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}