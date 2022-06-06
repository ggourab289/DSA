/* print pattern using recursion */

#include<bits/stdc++.h>
using namespace std;

void printpattern(int n)
{
    if(n==0 || n<0)
    {
        cout<<n<<" ";
        return;
    }
    else
       cout<<n<<" ";

    printpattern(n-5);

    cout<<n<<" ";
}

int main()
{
    int n=16;
    printpattern(n);
    return 0;
}