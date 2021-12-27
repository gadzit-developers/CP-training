#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int i=1;
    int j,k;
    int v,b,max,min,dis;
    string a;
    while(cin>>a){
    stringstream reh(a);
    reh >> v;
    cin>>max;
    min=max;
    for(int i=0;i<v-1;i++){
        cin>>b;
        if(b>max)max=b;
        if(b<min)min=b;
    }
    cout<<"Case "<<i<<": "<<min<<" "<<max<<" "<<abs(max-min)<<endl;
    i++;
    }
    return 0;
}