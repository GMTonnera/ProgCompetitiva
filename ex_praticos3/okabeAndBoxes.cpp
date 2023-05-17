#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux, remover = 0, org = 0, r = 0;
    string op;
    stack<int> s;
    cin >> n;

    for(int i = 0; i < 2*n; i++){
        cin >> op;
        if(op == "add"){
            cin >> aux;
            s.push(aux); 
        } else{
            remover++;
            if(s.empty() and remover <= org){
                    continue;
            } else{
                if(s.top() == remover){
                    s.pop();
                } else{
                    r++;
                    while(!s.empty()){
                        if(s.top() > org){
                            org = s.top();
                        }
                        s.pop();
                    }    
                }
            }
        }
    }
    cout << r << "\n";
    return 0;
}