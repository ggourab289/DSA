/*vector of vectors deletion*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>vec{{1,2,3},{4,5,6},{7,8,9}};
    vector<int>::iterator it;
    vec[2].pop_back();
    vec[0].pop_back();
    for(int i=0;i<3;i++)
    {
        for(auto it=vec[i].begin();it != vec[i].end();it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<endl;
    }
    return 0;
}