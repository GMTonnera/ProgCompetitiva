#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    string s1, aux, s2;
    cin >> t;
    for(int i = 0; i < t; i++){
        s2 = "";
        cin >> n;
        cin >> s1;
        for(int j = 0; j < n; j++){
            aux = s1.substr(j, n);
            s2 += aux[j];;
        }
        cout << s2 << "\n";
    }
}