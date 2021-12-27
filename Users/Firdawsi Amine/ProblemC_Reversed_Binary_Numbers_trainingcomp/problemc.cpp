#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    
    int n,a=0 ; cin >> n;

    while(n){
        a = (a<<1) | (n&1);
        n >>= 1;
    }

    cout << a;
    return 0;
}