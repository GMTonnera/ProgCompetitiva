#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, d=0;
    cin >> n >> m;
    while(n > 0){
        d++;
        n--;
        if(d % m == 0){
            n++;
        }
    }
    cout << d;
}