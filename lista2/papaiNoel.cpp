#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    char c;
    stack<pair<int,int>> s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c >> x;
        if(c == 'A'){
            if(s.empty() or x > s.top().second){
                s.push(make_pair(x, x));
            } else{
                s.push(make_pair(x, s.top().second));        
            }
        } else if(c == 'R'){
            s.pop();
        } else if(c == 'V'){
            if(s.empty()){
                cout << "0\n";
            } else{
                cout << s.top().second << "\n";
            }
        }
    }
    return 0;
}

