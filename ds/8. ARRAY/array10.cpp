#include<bits/stdc++.h>
#include<array>
#include<algorithm>
using namespace std;

void twosum(int arr[],int n,int target)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        if(arr[l]+arr[r]==target)
        {
            cout<<"["<<l<<","<<r<<"]"<<endl;
        }
        else if(arr[l]+arr[r]>target)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

}

int main()
{
    int arr[5]={6,7,4,9,2};
    int target;
    cin>>target;

    int n=sizeof(arr)/sizeof(arr[0]);
    
    
    twosum(arr,n,target);

    return 0;
    
}
