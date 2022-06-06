#include<iostream>
using namespace std;

void linearSearch(int a[],int n)
{
    int temp=-1;
    for(int i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            cout<<"element found at the position : "<<i+1<<endl;
            temp=0;
        }
    }
    if(temp==-1)
    {
        cout<<"no element found"<<endl;
    }
}

int main()
{
    int arr[5]={11,22,33,44,55};
    cout<<"enter the element to be searched :"<<endl;
    int num;
    cin>>num;


    linearSearch(arr,num);

    return 0;

}