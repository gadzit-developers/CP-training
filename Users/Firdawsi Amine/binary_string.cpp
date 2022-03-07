#include <bits/stdc++.h>

using namespace std;

int main(){

    string str; cin >> str;

    int zero=0,one=0; // frequency of one and zero
    for(char c : str){// for each char in string
        if(c=='1') one++; // if char is one add frequency of one
        else if(c=='0') zero++; // same for 0
    }

    int ans = abs(zero-one);

    cout << ans<< endl;
    return 0;
}
