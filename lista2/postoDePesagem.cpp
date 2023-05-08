#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, f, p, aux1, t = 0, aux2;
    queue<int> q;
    cin >> n >> f >> p;

    for(int i = 0; i < n; i++){
        cin >> aux1;
        q.push(aux1);
    }  
    aux2 = 0;
    while(!q.empty()){
        aux1 = q.front();
        q.pop();
        if(aux2 % f == 0){
            if(aux1 > p){
                aux1 -= 2;
                q.push(aux1);
                t += 10;   
            } else{
                t += 5;
            }
        } else{
            t++;
        }
        aux2++;
    }
    cout << t << "\n";
    return 0;
}