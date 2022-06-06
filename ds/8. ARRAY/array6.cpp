#include<bits/stdc++.h>
using  namespace std;

void getsum(int arr[],int n,int target)
{
    int l=0;
    int r=n-1;
    while(l<r)
    { 
        if(arr[l]+arr[r]==target)
        {
             cout<<"["<<l<<","<<r<<"]"<<endl;
             break;
        }
        else if(arr[l]+arr[r]>target)
              r--;
        else
            l++;          

    }
    
}

int main()
{
    int arr[5]={2,3,1,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    getsum(arr,n,target);
    return 0;
}