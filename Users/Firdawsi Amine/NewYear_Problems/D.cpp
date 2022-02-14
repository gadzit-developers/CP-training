#include <bits/stdc++.h>

using namespace std;

void movLeft(vector<vector<int>>& v){
    for(int i=0; i<4;i++){
        vector<int> f(4,0);
        int g=0,prev=-1;
        for(int j=0; j<4; j++){
            if(v[i][j]==0) continue;
            else if(prev>=0 && v[i][j]==f[prev]){
                f[prev] = 2*f[prev];
                prev=-1;
            } else {
                prev=g;
                f[g++] = v[i][j];
            }
        }
        for(int ff=0; ff<4; ff++)v[i][ff]=f[ff];
    }
}
void movRight(vector<vector<int>>& v){
    for(int i=0; i<4;i++){
        vector<int> f(4,0);
        int g=3,prev=-1;
        for(int j=3; j>=0; j--){
            if(v[i][j]==0) continue;
            else if(prev>=0 && v[i][j]==f[prev]){
                f[prev] = 2*f[prev];
                prev=-1;
            } else {
                prev=g;
                f[g--] = v[i][j];
            }
        }
        for(int ff=0; ff<4; ff++)v[i][ff]=f[ff];
    }
}
void movUp(vector<vector<int>>& v){
    for(int i=0; i<4;i++){
        vector<int> f(4,0);
        int g=0,prev=-1;
        for(int j=0; j<4; j++){
            if(v[j][i]==0) continue;
            else if(prev>=0 && v[j][i]==f[prev]){
                f[prev] = 2*f[prev];
                prev=-1;
            } else {
                prev=g;
                f[g++] = v[j][i];
            }
        }
        for(int ff=0; ff<4; ff++)v[ff][i]=f[ff];
    }
}
void movDown(vector<vector<int>>& v){
    for(int i=0; i<4;i++){
        vector<int> f(4,0);
        int g=3,prev=-1;
        for(int j=3; j>=0; j--){
            if(v[j][i]==0) continue;
            else if(prev>=0 && v[j][i]==f[prev]){
                f[prev] = 2*f[prev];
                prev=-1;
            } else {
                prev=g;
                f[g--] = v[j][i];
            }
        }
        for(int ff=0; ff<4; ff++)v[ff][i]=f[ff];
    }
}

void print(vector<vector<int>>& v){
    for(auto i : v)
    {
        for(int g=0; g<3 ; g++) cout << i[g] << " ";
        cout << i[3] << " " << endl;
    }
}

int main(){
    vector<vector<int>> bo (4,vector<int>(4));
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++){
            int a ; cin >> a ;
            bo[i][j] = a;
        }

    int op; cin >> op;    
    switch(op){
        case 0: movLeft(bo); break;
        case 1: movUp(bo); break;
        case 2: movRight(bo); break;
        case 3: movDown(bo); break;
    }

    print(bo);
}