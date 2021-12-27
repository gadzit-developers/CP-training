#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    
    string line; int cnt=1;
    while (getline(cin, line))
    {
        stringstream ss(line);

        int nn; ss>>nn;
        int v ;ss >> v;
        int m=v, n=v;
        nn--;
        while(nn--){ss >> v; m=max(m,v);n=min(n,v);}
    
        cout << "Case "<<cnt<<": " << n <<" " << m << " " << m-n << endl;
        cnt++;
    }


    return 0;
}