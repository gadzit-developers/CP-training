#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cout.precision(3);
    while(n--){
        int g; cin >> g;
        vector<int> v; v.reserve(g);
        int sum=0;
        for(int i=0; i<g;i++) {
            int j=0; cin >> j; v.push_back(j);
            sum+=j;
        }

        double av = (double)sum/g;
        int abo=0;
        for(auto b : v){
            if(b>av)abo++; 
        }
        double avv = (double)abo*100/g;
        cout << fixed << avv << "%" << endl;


    }
}