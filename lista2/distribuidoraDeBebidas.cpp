#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, c, b, v = 0, aux;
    pair<int, int> paux;
    cin >> n >> c >> b;
    queue<pair<int, int>> q1;
    queue<int> q2;

    for(int i = 0; i < n; i++){
        cin >> aux;
        q1.push(make_pair(aux, 0));
    }
    
    for(int i = 0; i < n; i++){
        cin >> aux;
        q2.push(aux);
    }

    while(!q1.empty()){
        paux = q1.front();
        paux.second += 1;
        aux = q2.front();
        q1.pop();
        q2.pop();
        // cout << "capacidade = " << paux.first << "; op = " << aux << "; vez = " << paux.second << ";\n";
        if(aux == 0){
            v += paux.first;
            c += v / b;
            v = v % b;
        } else{
            if(c == 0){
                if(paux.second != 2){
                    q1.push(make_pair(paux.first, paux.second));
                    q2.push(aux);
                }
            } else if(c*b <= paux.first){
                c = 0;
            } else{
                // cout << paux.first / b << "\n";
                c -= paux.first / b;
            }
        }
        // cout << "v = " << v << "; c = " << c << ";\n";
    }

    cout << c*b + v << "\n";
    return 0;
}