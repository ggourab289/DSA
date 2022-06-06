#include<bits/stdc++.h>
using namespace std;

void insert(int A[],int n)
{
   int i=n;
   int temp=A[n];

   while(i>1 && temp>A[i/2])
   {
       A[i]=A[i/2];
       i=i/2;
   }
   A[i]=temp;

}

int Delete(int A[],int n)
{
    int i,j,x;
    x=A[n];
    A[1]=A[n];

    A[n]=x;

    i=1;j=2*i;
    while(j<= n-1)
    {
        if(A[j+1]>A[j])
        {
            j=j+1;
        }
        if(A[i]<A[j])
        {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }
        else 
           break;
    }
    return x ;


}

int main()
{
    int A[]={45,35,20,10,5,3,2};
    for(int i=2;i<7;i++)
    {
        insert(A,i);
    }
    for(int i=1;i<7;i++)
    {
        cout<<A[i]<< " ";
    }
    cout<<endl;
    

    for(int i=7;i>1;i--) 
    {
           Delete(A,i);
    }

    for(int i=1;i<7;i++)
    {
        cout<<A[i]<< " ";
    }
    cout<<endl;


    return 0;
}