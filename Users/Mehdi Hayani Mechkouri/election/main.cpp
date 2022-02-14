#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    map<string , int> index;
    vector<string> names;
    vector<string> parties;
    string name, party, winner;

    scanf("%d\n", &n);
    vector<int> scores;
    for(int i =0 ;i < n ; i++) scores.push_back(0);

    for(int i = 0; i < n; i++){
        getline(cin ,name);
        getline(cin, party);
        index[name] = i+1;
        names.push_back(name);
        parties.push_back(party);
    }
    int maxi = 0;
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++){
        getline(cin ,name);
//cout<<"\n"<<scores.size()<<endl;;

        if( index[name] !=0 ){

            int tmp = ++ scores[index[name]-1];
            if(tmp  > maxi){
                maxi = tmp;
            }
        }
    }

    n = 0;
    int i = 0;
    for(auto x :scores){
        if(x == maxi){
            n++;
            winner = parties[i];
            if(n > 1){
                break;
            }
        }
        i++;
    }
    if(n > 1){
        cout<<"tie"<<endl;
    }else cout<<winner<<endl;

    return 0;
}
