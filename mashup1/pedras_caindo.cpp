#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        vector<string> v;
        vector<pair<int, int>> v2;
        int n, m;
        string aux;
        char aux2;
        cin >> n >> m;
        for(int j = 0; j < n; j++){
            cin >> aux;
            v.push_back(aux);
            for(int k = 0; k < m; k++){
                if(aux[k] == '*'){
                    v2.push_back(make_pair(j, k));
                }
            }
        }

        for(int j = (int) v2.size()-1; j >= 0; j--){
            // cout << "Pedra " << j << "\n";
            while(v2[j].first <= n-2){
                // cout << v2[j].second+1 << " " << j <<"\n";
                aux2 = v[v2[j].first+1][v2[j].second]; 
                if(aux2 == '.'){
                    v[v2[j].first+1][v2[j].second] = '*';
                    v[v2[j].first][v2[j].second] = '.';
                    v2[j].first++;
                }
                else{
                    break;
                }
            }
        }
        cout << "\n";
        for(int j = 0; j < n; j++){
            cout << v[j] << "\n";
        }
        
    }
    return 0;
}