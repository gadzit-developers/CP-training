#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string line,ans=""; cin>> line;

    char prev=0;
    for(int i=0; i<line.size();i++){
        if(prev!=line[i]) ans += line[i];
        prev=line[i];
    }

    cout << ans;
    
}