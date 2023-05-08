#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char c;
    bool frog = false;
    int x = 0, r = 0;

    cin >> s;

    for(int i = 0; i < (int) s.length(); i++){
        if(s[i] == 'r'){
            if(frog){
                r += x;
                x = 0;
            } else{
                frog = true;
            }
        } else if(s[i] == '.' and frog){
            x++;
        } else if(s[i] == 's' and frog){
            frog = false;
            x = 0;
        }
    }
    r += x;
    cout << r << "\n";
    return 0;
}