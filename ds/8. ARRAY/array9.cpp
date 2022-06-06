/*find kth largest element*/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[5]={4,2,7,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int k;
    cin>>k;
    cout<<arr[k-1]<<endl;
    return 0;
}