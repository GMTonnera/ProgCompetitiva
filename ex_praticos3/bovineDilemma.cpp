#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, aux1, aux2;
        stack<int> s1;
        stack<int> s2;
        set<int> st1;
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> aux1;
            s1.push(aux1);
        }
        while(!s1.empty()){
            aux1 = s1.top();
            s1.pop();
            s2 = s1;
            for(int j = 0; j < (int) s1.size(); j++){
                aux2 = s2.top();
                s2.pop();
                st1.insert(abs(aux1 - aux2));
            }
        }
        
        cout << st1.size() << "\n";

    }
    return 0;
}