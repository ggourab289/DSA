/*vector of pairs*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v_p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v_p.push_back(make_pair(x,y));
    }
    for(int i=0;i<v_p.size();i++)
    {
        cout<<v_p[i].first<<" "<<v_p[i].second<<" ";
    }
    cout<<endl;
}