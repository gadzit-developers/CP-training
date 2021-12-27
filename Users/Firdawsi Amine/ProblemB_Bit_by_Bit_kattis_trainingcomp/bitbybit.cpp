#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){

    int n ; cin >> n;
    while(n!=0){
        vector<int> v(32,-1);

        for(int i=0; i<n; i++){
            string op; cin >> op;
            if(op=="SET"){
                int a; cin >> a;
                v[a] = 1;
            }else  if(op=="CLEAR"){
                int a; cin >> a;
                v[a] = 0;
            }else  if(op=="AND"){
                int a,b; cin >> a >> b;
                if(v[a]==0 || v[b]==0) v[a]=0;
                else if(v[a]==-1 || v[b]==-1) v[a]=-1;
                else v[a] &= v[b];
            }else  if(op=="OR"){
                int a,b; cin >> a >> b;
                if(v[a]==1 ||  v[b]==1) v[a]=1;
                else if(v[a]==-1 ||  v[b]==-1) v[a]=-1;
                else v[a] |= v[b];
            }


        }

        for(int i=31; i>=0;i--){
            if(v[i]==-1) cout << '?';
            else cout << v[i];
        }
        cout << endl;


        cin>>n;
    }


    return 0;
}