#include <bits/stdc++.h>

using namespace std ;


int main() {
  int a, b, t1, t2;
  // uses an unordered_map to store occurences of every element
  // if not defined t[i] = 0
  unordered_map<int, int> t;
  cin>>a>>b;
  for(int i =0 ;i < b ; i++){
    cin>>t1>>t2;
    t[t1]++;
    t[t2]++;
    // increases frequency of t1 and t2 by one
  }

  for(int i =0 ; i < a ;i++){
    cout<<t[i+1]-(i+1)<<endl;
  }

} 