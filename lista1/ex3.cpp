#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, aux;
    cin >> n >> a;
    aux = n % 500;
    if(a >= aux){
        cout << "Sim";
    } else{
        cout << "Nao";
    }
}