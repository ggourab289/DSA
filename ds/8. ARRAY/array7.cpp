#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int n)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }

    cout<<"reverse array is : "; 

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    int arr[5]={3,7,5,2,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    reversearray(arr,n);

    return 0;
}