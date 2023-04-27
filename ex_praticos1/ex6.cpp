#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, aux;
    vector<int> v;
    
    cin >> t;
    for(int i = 0; i < t; i++){
        v = {};
        for(int j = 0; j < 7; j++){
            cin >> aux;
            v.push_back(aux);
        }
        cout << v[0] << " " << v[1] << " ";
        for(int j = 2; j < 7; j++){
            if(v[0] + v[1] + v[j] == v[6]){
                cout << v[j] << "\n";
                break;
            }
        }        
    }
    return 0;
}