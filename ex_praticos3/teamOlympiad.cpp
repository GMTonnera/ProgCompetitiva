#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux;
    
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    vector<int> v;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> aux;
        if(aux == 1){
            s1.push(i);
        } else if(aux == 2){
            s2.push(i);
        } else if(aux == 3){
            s3.push(i);
        }
    }
    aux = 0;
    while(!s1.empty() and !s2.empty() and !s3.empty()){
        v.push_back(s1.top());
        v.push_back(s2.top());
        v.push_back(s3.top());
        s1.pop();
        s2.pop();
        s3.pop();
        aux++;
    }
    cout << aux << "\n";
    for(int i = (int) v.size() -1 ; i > 0; i-=3){
        cout << v[i-2] << " " << v[i-1] << " " << v[i] << "\n";
    }
    return 0;
}