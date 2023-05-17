#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    stack<char> stk;
    cin >> s;

    for(int i = 0; i < (int) s.length(); i++){
        if(stk.empty() or stk.top() != s[i]){
            stk.push(s[i]);
        } else{
            stk.pop();
        }
    }

    if(stk.empty()){
        cout << "Yes\n";
    } else{
        cout << "No\n";
    }
    return 0;
}