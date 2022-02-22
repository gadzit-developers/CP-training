#include<bits/stdc++.h>
using namespace std;

struct pokemons{
    int id;
    unsigned int atk,def,heal;
};

bool sortatk(pokemons a,pokemons b){
    return (a.atk>b.atk)?true:false;
}
bool sortdef(pokemons a,pokemons b){
    return (a.def>b.def)?true:false;
}

bool sortheal(pokemons a,pokemons b){
    return (a.heal>b.heal)?true:false;
}

int main(){
    int n;cin>>n;
    int h;cin>>h;
    vector<pokemons>poke;
    for (int i=0;i<n;i++){
        pokemons pok;
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
