#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, k1, k2;
    long long aux;
    vector<long long> v1;
    priority_queue<long long> pq;
    cin >> n >> k1 >> k2;
 
    for(int i = 0; i < n; i++){
        cin >> aux;
        v1.push_back(aux);
    }
 
    for(int i = 0; i < n; i++){
        cin >> aux;
        pq.push(abs(v1[i] - aux));
    }
 
    for(int i = 0; i < k1+k2; i++){
        aux = pq.top();
        pq.pop();
        if(aux > 0){
            aux--;
        } else{
            aux++;
        }
        pq.push(aux);
    }
 
    aux = 0;
    while(!pq.empty()){
        aux += pow(pq.top(), 2);
        pq.pop();
    }
 
    cout << aux << "\n";
    return 0;
}