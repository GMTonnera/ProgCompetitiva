#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, g, f, c, p;
    cin >> n >> g >> f >> c;
    p = c;
    while(g > 0 && f >> 0){
        p++;
        f--;
        g--;
    }
    if(p > n){
        cout << n;    
    } else{
        cout << p;
    }
}