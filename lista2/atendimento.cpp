#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

int main(){
    int n, m, aux;
    pii p_aux;
    vector<int> v1;
    priority_queue<pii, vector<pii>, greater<pii>> q1;
    queue<int> q2;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v1.push_back(aux);
        q1.push(make_pair(0, i));
    }
    
    for(int i = 0; i < m; i++){
        cin >> aux;
        q2.push(aux);
    }

    while(!q2.empty()){
        aux = q2.front();
        q2.pop();
        p_aux = q1.top();
        q1.pop();
        p_aux.first += v1[p_aux.second] * aux;
        q1.push(p_aux);
    }   
    aux = -1;
    while(!q1.empty()){
        p_aux = q1.top();
        q1.pop();
        if(aux == -1 or p_aux.first > aux){
            aux = p_aux.first;
        } 
    }   
    
    cout << aux << "\n";
    return 0;
}