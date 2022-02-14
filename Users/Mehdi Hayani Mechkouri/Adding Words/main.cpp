#include <bits/stdc++.h>

using namespace std;



int main()
{
    string command;
    unordered_map<string, int> var;
    unordered_map<int, string> var_rev;

    while(getline(cin , command)){
        string first, tmp;
        stringstream els(command);
        els >> first;
        if(first == "clear"){
            var.clear();
            var_rev.clear();
        }else if (first == "def"){
            els >> tmp;
            els >> first;
            if( var.find(tmp) != var.end()){
                var_rev.erase(var_rev.find(var[tmp]));
            }
            var[tmp] = stoi(first);
            var_rev[stoi(first)] = tmp;
        }else {
            int ans = 0;
            int operation = 1;
            bool error = false;
            int i = 0;
            while (els >> tmp){
                if(tmp == "+"){
                    operation = 1;
                }else if (tmp == "-"){
                    operation = -1 ;
                }else if (tmp == "="){
                    continue;
                }else{
                    if(var.find(tmp) != var.end()){
                        ans += operation*var[tmp];
                    }else{
                        error = true;
                        break;
                    }
                }
            }
            for(int i = 5 ; i < command.size() ; i++){
                cout<<command[i];
            }
            cout<<" ";
            if(error){
                cout<<"unknown\n";
            }else {
                if(var_rev.find(ans) != var_rev.end())
                    cout<< var_rev[ans]<<endl;
                else {
                    cout<<"unknown\n";
                }
            }

        }

    }
    return 0;
}
