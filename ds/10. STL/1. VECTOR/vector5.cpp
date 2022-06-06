#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>&v1)
{
    v1.push_back(30);
}
int main()
{
    vector<int>v1;
    v1.push_back(10);
    v1.push_back(20);

    fun(v1);

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<< endl;
    return 0;
}