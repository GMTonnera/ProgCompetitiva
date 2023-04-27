#include<bits/stdc++.h>

using namespace std;

int mdc(int x, int y){
    if(x % y == 0){
        return y;
    } else{
        return mdc(y, x % y);
    }
}

int main(){
    long long int k, n;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        if(n % mdc(2, k) == 0){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
        k = 0;
        n = 0;
    }

    return 0;
}