#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{2,6,4,9};
    vector<int>v2;

    for(int i=0;i<v1.size();i++)
    {
        v2.push_back(v1[i]);
    }

    cout<<"old vector elements are :";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"new vwctoe elements are :";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    return 0;
}