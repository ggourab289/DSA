#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        int min=i;
        for(int j=i+1;j<5;j++)
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
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}