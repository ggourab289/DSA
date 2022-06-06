/* sum of n natural number */
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
      return 0;
    else
       return (sum(n-1)+n);   
}

int main()
{
    int r=sum(10);
    cout<<r;
    return 0;
}