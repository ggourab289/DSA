#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    getline(cin,str);

    cout<<"initial string is:";
    cout<<str<<endl;

    str.push_back('s');

    cout<<str<<endl;

    str.pop_back();

    cout<<str<<endl;
}