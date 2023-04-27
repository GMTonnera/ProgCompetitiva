#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    bool y = true;
    string aux;
    while(y){
        x++;
        y = false;
        aux = to_string(x);
        for(int i = 0; i < (int) aux.length()-1; i++){
            for(int j = i+1; j < (int) aux.length(); j++){
                if(aux[i] == aux[j]){
                    y = true;
                    break;
                }
            }
        }
    }
    cout << x;
}