#include<bits/stdc++.h>

using namespace std;

int main(){
    int q, t, m;
    set<int> s;
    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> t >> m;
        if(t == 1){
            s.insert(m);
        } else{
            if(s.find(m) == s.end()){
                cout << "Nao\n";
            } else{
                cout << "Sim\n";
            }
        }
    }
    return 0;
}