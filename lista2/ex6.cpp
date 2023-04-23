#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux;
    vector<int> v, r;
    bool f = false;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }
    for(int i = 0; i < n-1; i++){
        f = false;
        for(int j = i+1; j < n; j++){
            if(v[j] > v[i]){
                r.push_back(j+1);
                f = true;
                break;
            }
        }
        if(!f){
            r.push_back(-1);
        }
    }
    
    r.push_back(-1);
    for(int i = 0; i < n; i++){
        cout << r[i] << " ";
    }

    return 0;
}