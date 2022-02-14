#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    map<string , int> t;
    getline(cin , s);
    stringstream inp(s);
    string b;
    bool flag = false;
    while(inp >> b){
        if(t[b]) flag = true;
        t[b]++;
    }
    if (flag){
        cout<<"no"<<endl;
    }else {
        cout<<"yes"<<endl;
    }
    return 0;
}
