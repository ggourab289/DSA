#include<bits/stdc++.h>
using namespace std;

    long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
    }

    int main(){

        long long a=1000000;
        long long b=20000;
        long long binpow(1000000,20000);
        return 0;
    }