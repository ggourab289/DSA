#include<bits/stdc++.h>
using namespace std;

void majoritycheck(int arr[],int n)
{
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }

        if(count>maxcount)
        {
            maxcount=count;
            index=i;
        }
    }
    if(maxcount>n/2)
    {
        cout<<"majority element is :"<<arr[index]<<endl;
    }
    else
    {
        cout<<"there is no such element"<<endl;
    }
}

int main()
{
    int arr[6];
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    majoritycheck(arr,n);
    return 0;
}