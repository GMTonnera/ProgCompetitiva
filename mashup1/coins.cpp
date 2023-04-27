#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, s, c = 0;
    cin >> n >> s;
    for(int i = n; i > 0; i--){
        while(i <= s){
            s -= i;
            c++;
        }
    }
    cout << c << "\n";
    return 0;
}
