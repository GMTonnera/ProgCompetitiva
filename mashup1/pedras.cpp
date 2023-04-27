#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux, r=0;
    string pedras;
    cin >> n;
    cin >> pedras;

    for(int i = 0; i < n-1; i++){
        aux = i+1;
        while(pedras[i] == pedras[aux]){
            aux++;
            r++;
            i++;
        }
    }
    cout << r << "\n";
    return 0;
}