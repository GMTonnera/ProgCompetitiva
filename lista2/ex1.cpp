#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, c, d, p;
    cin >> t;
    for(int i = 0; i < t; i++){
        p = 0;
        cin >> a >> b >> c >> d;
        if(a < b){
            p++;
        }
        
        if(a < c){
            p++;
        }
        
        if(a < d){
            p++;
        }
        cout << p << "\n";
    }
    
    return 0;
}