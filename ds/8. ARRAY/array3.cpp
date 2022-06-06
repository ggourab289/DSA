#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min != i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }


bool outcome(int arr[],int n,int sum)
{
    int l,r;
    l=0;
    r=n-1;
    while(l<r)
    {
        if(arr[l]+arr[r]==sum)
             return 1;
        else if(arr[l]+arr[r]>sum)
             r--;
        else
            l++;          
    }
    return 0;
}

int main()
{
    int arr[6]={8,2,4,7,9,3};
    int sum;
    cout<<"enter the value of sum"<<endl;
    cin>>sum;
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    if(outcome(arr,n,sum)==1)
    {
        cout<<"there are 2 such elements, the sum of which is equal to given sum"<<endl;
    }
    else
    {
        cout<<"there are not any such elements"<<endl;
    }
    return 0;
}