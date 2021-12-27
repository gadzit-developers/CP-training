#include<bits/stdc++.h>
using namespace std;
int decToBinary(int n,int* h)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = 0; j <= i-1; j++)
        *(h+j)=binaryNum[j];
    return i;
}
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int h[32];
    int t,y,u;
    int n;
    cin >>n;
    y=0;
    int* j;
    u=decToBinary(n,h);
    for(int i=0;i<u;i++){
        if(h[i]==1){t=i;break;}
    }
    for(int i=0;i<=u-(t+1);i++){
        y=y+(pow(2,i)*h[u-1-i]);
    }
    cout<<y;
    return 0;
}