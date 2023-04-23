#include<bits/stdc++.h>

using namespace std;

int main(){
    int nRest, xC, yC, aux1, aux2, aux3, m, ind = 0;
    cin >> nRest >> xC >> yC;
    vector<int> cost; 

    for(int i = 0; i < nRest; i++){
        cin >> aux1 >> aux2 >> aux3;
        // cout << aux1 << " " << aux2 << " " << aux3 << "\n";
        aux1 = (abs(xC - aux1) + abs(yC - aux2))*2 + aux3;
        // cout << abs(xC - aux1) + abs(yC - aux2) << " " << aux1 << "\n";
        if(i == 0 || aux1 < m){
            m = aux1;
            ind = i+1; 
        }
    }
    cout << m << " " << ind; 
}