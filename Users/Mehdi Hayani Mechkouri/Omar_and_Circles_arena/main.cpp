#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    long double a , b , r, c , n , alpha ;
    cin>>t;
    while(t--){
        cin>>c>>a>>b>>n;
        r = a*a + b*b ;
        alpha = acos((-c*c + 2*(r))/(2*(r)));
        alpha *=n ;
        c = a*cos(alpha) + b*sin(alpha);
        b = -1*a*sin(alpha) + b*cos(alpha);
        cout<<setprecision(9)<<c<< " "<<b<<endl;

    }

    return 0;
}