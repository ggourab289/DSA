/*sum of elements of array*/
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++ )
    sum=sum+arr[i];

    
    return sum;
}

int main()
{

    int arr[]={1,3,4,5,3};
    int n=sizeof(arr) / sizeof(arr[0]);

    cout<<"sum of elements of the array :"<<sum(arr,n);

    return 0;
}
