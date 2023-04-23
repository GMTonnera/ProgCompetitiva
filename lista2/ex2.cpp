#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, s1, s2;
    string ticket;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> ticket;
        s1 = 0;
        s2 = 0;
        for(int j = 0; j < 3; j++){
            s1 += int(ticket[j] - '0');
        }

        for(int j = 3; j < 6; j++){
            s2 += int(ticket[j] - '0');
        }
        if(s1 == s2){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
    return 0;
}