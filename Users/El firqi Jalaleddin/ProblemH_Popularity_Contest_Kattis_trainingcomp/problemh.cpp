#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,m,d;
    cin>>n>>m;
    if(m==0){
        for(int i=1;i<=n;i++){
            cout<<-1*i<<" ";
        }
    }else{
    int tab[n];
    for(int i=0;i<n;i++) tab[i]=0;
    for(int i=0;i<m;i++){
        cin>>d;
        tab[d-1]++;
        cin>>d;
        tab[d-1]++;
    }
    for(int i=1;i<=n;i++){
        cout<<tab[i-1]-i<<" ";
    }
    }
    return 0;
}