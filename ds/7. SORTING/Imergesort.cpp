#include<bits/stdc++.h>
using namespace std;
void merge(int A[],int l,int mid,int h)
{
    int i,j,k;
    i=l;j=mid+1;k=l;
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
           B[k++]=A[i++];
        else 
           B[k++]=A[j++];   
    }
    for(;i<=mid;i++)
      B[k++]=A[i];
    for(;i<=h;i++)
      B[k++]=A[j];  
    for(i=l;i<=h;i++)
       A[i]=B[i];
}

void Imergesort(int A[],int n)
{
    int p,i,l,mid,h;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(A,l,mid,h);

        }
    }
    if(p/2 < n)
      merge(A,0,p/2,n-1);
}
int main()
{
   int A[8]={5,2,7,9,1,6,8,22};
   int n=8;
   Imergesort(A,8);
   for(int i=0;i<8;i++)
       cout<<A[i]<<" ";
   cout<<endl;    
   return 0;
}