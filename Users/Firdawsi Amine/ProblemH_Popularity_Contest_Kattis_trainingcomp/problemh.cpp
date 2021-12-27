#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    
    int n, m; cin >> n >>m;
    vector<int> v(n,0);
    while(m--){
        int a, b; cin >> a >> b;
        v[a-1]++;
        v[b-1]++;
    } 
    for(int i=0; i<n ; i++){
        cout << v[i]-i-1 << " ";
    }

    return 0;
}