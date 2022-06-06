/*maximum element of array*/

#include<bits/stdc++.h>
using namespace std;

int maximum(int arr[],int n)
{
   int max=arr[0];
   for(int i=0;i<n;i++)
   {
       if(arr[i]>max)
          max=arr[i];
   }
   return max;
}

int main()
{
    int arr[]={20,34,23,76,45};
    int n=sizeof(arr) / sizeof(arr[0]);

    cout<<"maximum element of the array is:"<<maximum(arr,n);

    return 0;
}