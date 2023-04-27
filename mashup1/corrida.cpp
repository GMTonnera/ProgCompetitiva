#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first < b.first){
        return true;
    }
    return false;
}


int main(){
    int n, aux, ant, q;
    vector<pair<int, int>> v;
    vector<int> v2;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(make_pair(aux, i));
        v2.push_back(0);
    }
    sort(v.begin(), v.end(), comp);
    aux = 1;
    ant = v[0].first;
    q = 0;
    for(int i = 0; i < n; i++){
        if(ant != v[i].first){
            aux+= q;
            q = 0;
        }
        v2[v[i].second] = aux;
        ant = v[i].first;
        q++;
    }

    for(int i = 0; i < n; i++){
        cout << v2[i] << " ";
    }    
    return 0;
}
