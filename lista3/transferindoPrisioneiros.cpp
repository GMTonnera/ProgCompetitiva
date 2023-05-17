#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t, c, aux, r = 0;
    queue<int> q;
    cin >> n >> t >> c;

    for(int i = 0; i < n; i++){
        cin >> aux;
        if(aux <= t){
            if(q.size() < c){
                q.push(aux);
            } 
            if(q.size() == c){
                r++;
                q.pop();
            }
        } else{
            while(!q.empty()){
                q.pop();
            }
        }
    }

    cout << r << "\n";
    return 0;
}