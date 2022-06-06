/* factorial of n number*/
#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
     return 1;
    else
       return (factorial(n-1)*n);

}

int main()
{
    int r=factorial(5);
    cout<<r;
    return 0;
}