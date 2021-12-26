#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int g;
    for(int i=1;i<=n;i++){
        cin>>g;
        int tab[g];
        for(int j=0;j<g;j++){
            cin>>tab[j];
        }
        for(int k=0;k<g-1;k++){
            for(int f=k+1;f<g;f++){
                if(tab[k]==tab[f]){tab[k]=0;tab[f]=0;break;}
            }
        }
        for(int j=0;j<g;j++){
            if(tab[j]!=0) cout<<"Case #"<<i<<": "<<tab[j]<<endl;
        }
    }
    return 0;
}