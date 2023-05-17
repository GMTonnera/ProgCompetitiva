#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux; 
    bool b = false;
    vector<int> v1;
    vector<int> v2;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> aux;
        v1.push_back(aux);
    }

    sort(v1.begin(), v1.end());
    for(int i = 0; i < n-1; i++){
        cin >> aux;
        v2.push_back(aux);
    }
    
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n-1; i++){
        if(v1[i] != v2[i]){
            b = true;
            aux = i;
            break;
        }
    }

    if(b){
        cout << v1[aux] << "\n";
    } else{
        cout << v1[n-1] << "\n";
    }
    b = false;
    v1.clear();

    for(int i = 0; i < n-2; i++){
        cin >> aux;
        v1.push_back(aux);
    }

    sort(v1.begin(), v1.end());
    for(int i = 0; i < n-2; i++){
        if(v1[i] != v2[i]){
            b = true;
            aux = i;
            break;
        }
    }
    
    if(b){
        cout << v2[aux] << "\n";
    } else{
        cout << v2[n-2] << "\n";
    }

    return 0;
}