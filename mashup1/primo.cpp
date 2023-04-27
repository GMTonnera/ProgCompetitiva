#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long x, y;
        cin >> x >> y;
        if(x-y != 1 && (x - y % 2 == 0 || x - y % 3 == 0 || x - y % 5 == 0 || x - y % 7 == 0 || x - y % 11)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        x = 0;
        y = 0;
        
    }

    return 0;
}