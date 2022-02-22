#include<bits/stdc++.h>
using namespace std;

struct pokemone{
    int id;
    unsigned int atk,def,heal;
};

bool sortatk(pokemone a,pokemone b){
    return (a.atk>b.atk)?true:false;
}
bool sortdef(pokemone a,pokemone b){
    return (a.def>b.def)?true:false;
}

bool sortheal(pokemone a,pokemone b){
    return (a.heal>b.heal)?true:false;
}

int main(){
    int n;cin>>n;
    int h;cin>>h;
    vector<pokemone>poke;
    for (int i=0;i<n;i++){
        pokemone pok;
        cin>>pok.atk;
        cin>>pok.def;
        cin>>pok.heal;
        pok.id=i+1;
        poke.push_back(pok);
    }
    sort(poke.begin(),poke.end(),sortatk);
    set<int>ans;
    for (int i=0;i<h;i++)
        ans.insert(poke[i].id);
    sort(poke.begin(),poke.end(),sortdef);
    for (int i=0;i<h;i++)
        ans.insert(poke[i].id);
    sort(poke.begin(),poke.end(),sortheal);
    for (int i=0;i<h;i++)
        ans.insert(poke[i].id);
    cout<<ans.size()<<endl;
}
