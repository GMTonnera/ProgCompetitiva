#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, s = 0, aux2;
    cin >> n >> a >> b;
    string aux;

    for(int i = 1; i <= n; i++){
        aux2 = 0;
        aux = to_string(i);
        for(int j = 0; j < (int) aux.length();j++){
            aux2 += aux[j] - '0';
        }
        if(aux2 >= a && aux2 <= b){
            s += i;
        }
    }
    cout << s;
}