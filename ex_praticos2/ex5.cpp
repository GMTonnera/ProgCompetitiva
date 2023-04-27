#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, aux, m;
    vector<int> v;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> aux;
            v.push_back(aux);
        }
        aux = 0;
        m = max_element(v.begin(), v.end()) - v.begin();
        for(int j = 0; j < n; j++){
            if(v[j] < v[m] && abs(v[m] - v[j]) > aux){
                aux = v[m] - v[j];
            }
        }
        cout << aux << "\n";
        v = {};
        n = 0;
    }

    return 0;
}