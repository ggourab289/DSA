#include<bits/stdc++.h>
using namespace std;

int checkoddoccurance(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
              count++;
        }
        if(count%2 !=0)
           return arr[i];
    }
    return (-1);
}

int main()
{
    int arr[9]={2,4,4,2,3,3,3,4,4};

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<checkoddoccurance(arr,n);

    return 0;
}