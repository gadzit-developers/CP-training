#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n; // read number of lines
  
    for (int i=0; i<n; i++){ // for each line
        string a,b; cin >> a >> b; 
      
        if(a.size() != b.size()) cout << "Azuz is not my leader" <<endl; // if size different then automatically not anagram
      
        else if(a.size()<=2){
            cout << ((a==b) ? "Awesome anagram":"Azuz is not my leader" ) <<endl;
        } else {
            if((a[0]!=b[0]) || a[a.size()-1]!= b[b.size()-1]) cout << "Azuz is not my leader" <<endl;
            else {
                // SORT METHOD
                //
                // sort(a.begin()+1, a.end()-1);
                // sort(b.begin()+1, b.end()-1);
                // cout << ((a==b) ? "Awesome anagram": "Azuz is not my leader") <<endl; 
                //
                // FREQUENCY METHOD
                vector<int> v1(26,0), v2(26,0);
                for (int i=1; i<a.size()-1; i++) v1[a[i]-'a']++;
                for (int i=1; i<b.size()-1; i++) v2[b[i]-'a']++;
                cout << ((v1==v2) ? "Awesome anagram": "Azuz is not my leader") <<endl;
            }
        }
    }
}
