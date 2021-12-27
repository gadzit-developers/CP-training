#include <bits/stdc++.h>

using namespace std;

//solution 1 XOR
int main(int argc, char** argv){

    int n ; cin >> n;
    for(int i=1; i<=n; i++){
        int b; cin>> b;
        long int a=0;
        while(b--){
            int r; cin >> r;
            a^=r;
        }
        cout << "Case #"<< i<<": "<< a<<endl;
    }


    return 0;
}

/* solution 2 sort

int main(int argc, char** argv){

    int n ; cin >> n;
    for(int i=1; i<=n; i++){
        int b; cin>> b;
        vector<int> v;
        v.reserve(b);
        int a;
        while(b--){
            int r; cin >> r;
            v.push_back(r);
        }
        sort(v.begin(),v.end());
        if(v[v.size()-2]!=v[v.size()-1]) a= v[v.size()-1];
        else for(int j=0; j<v.size()-1; j+=2)
            if(v[j]!=v[j+1]){
                a=v[j];
                break;
            }


        cout << "Case #"<< i<<": "<< a<<endl;
    }


    return 0;
}
*/