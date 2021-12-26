#include <bits/stdc++.h>

using namespace std;

//TLE o(nlog(k))
// 8/13
int main(int argc, char** argv){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >>m;
    set<int> s;

    while(m--){
        string op; cin >> op;
        if(op=="F"){
            int a ; cin >> a;
            set<int, greater<int> >::iterator itr = s.find(a);
            if(itr==s.end()) s.insert(a);
            else s.erase(itr);
        } else {
            int a, b; cin >> a >> b;
            int ans=0;
            for (set<int, greater<int> >::iterator itr = s.lower_bound(a); itr != s.upper_bound(b); itr++) {
                ans++;
            }
            cout << ans << "\n";
        }

    }

    return 0;
}

//TLE o(nk)
// 4/13

/*

int main(int argc, char** argv){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >>m;
    vector<bool> v(n,0);
    while(m--){
        string op; cin >> op;
        if(op=="F"){
            int a ; cin >> a; v[a]=!v[a];
        } else {
            int a, b; cin >> a >> b;
            int ans=0;
            for(int i=a; i<=b; i++){
                ans+=v[i];
            }
            cout << ans << "\n";
        }

    }
    return 0;
}


*/