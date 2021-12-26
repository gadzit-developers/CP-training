#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //start
    string h;
    char reg[32];
    int u,b,o;
    u=0;b=0;o=0;
    int t[2];
    for(int i=0;i<32;i++) reg[i]='?';
    int a;
    cin>>a;
    if(a==0){
    for(int i=0;i<32;i++) cout<<reg[i];
    }else{
    do{
    for(int i=0;i<a;i++){
        cin>>h;
        if(h[0]=='C'){
            cin>>t[0];
            reg[t[0]]='0';
        }else if(h[0]=='S'){
            cin>>t[0];
            reg[t[0]]='1';
        }else if(h[0]=='O'){
            cin>>t[0];
            cin>>t[1];
            if((reg[t[0]]=='?')&&(reg[t[1]]=='?')){
                reg[t[0]]='?';
            }else if(((reg[t[0]]=='?')&&(reg[t[1]]=='1'))||((reg[t[0]]=='1')&&(reg[t[1]]=='?'))){
                reg[t[0]]='1';
            }else if(((reg[t[0]]=='?')&&(reg[t[1]]=='0'))||((reg[t[0]]=='0')&&(reg[t[1]]=='?'))){
                reg[t[0]]='?';
            }
            else{
                if(reg[t[0]]=='0')u=0;else u=1;
                if(reg[t[1]]=='0')b=0;else b=1;
                o=u+b;
                if(o){
                    reg[t[0]]='1';
                }else{
                    reg[t[0]]='0';
                }
            }
        }else if(h[0]=='A'){
            cin>>t[0];
            cin>>t[1];
            if((reg[t[0]]=='?')&&(reg[t[1]]=='?')){
                reg[t[0]]='?';
            }else if(((reg[t[0]]=='?')&&(reg[t[1]]=='0'))||((reg[t[0]]=='0')&&(reg[t[1]]=='?'))){
                reg[t[0]]='0';
            }else if(((reg[t[0]]=='?')&&(reg[t[1]]=='1'))||((reg[t[0]]=='1')&&(reg[t[1]]=='?'))){
                reg[t[0]]='?';
            }
            else{
                if((reg[t[0]])=='0')u=0;else u=1;
                if((reg[t[1]])=='0')b=0;else b=1;
                o=u*b;
                if(o){
                    reg[t[0]]='1';
                }else{
                    reg[t[0]]='0';
                }
            }
        }
    }
    for(int i=31;i>=0;i--) cout<<reg[i];
    for(int i=0;i<32;i++) reg[i]='?';
    cout<<endl;
    cin>>a;
    }while(a!=0);
    }
    return 0;
}
