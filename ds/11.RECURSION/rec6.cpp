/* power factor*/

#include<bits/stdc++.h>
using namespace std;

int pow(int m,int n)
{
    if(n==0)
      return 1;
    else 
       return (pow(m,n-1)*m);  
}

int main()
{
    int r=pow(2,4);
    cout<<r;
    return 0;
}