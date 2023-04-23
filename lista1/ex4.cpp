#include<bits/stdc++.h>

using namespace std;


bool alphabeticalOrder(string a, string b){
    return a < b;
}

int main(){
    int n;
    cin >> n;
    string aux;
    vector<string> names1;
    vector<string> names2;
    for(int i = 0; i < n; i++){
        cin >> aux;
        names1.push_back(aux);
        names2.push_back(aux);
    }
    sort(names2.begin(), names2.end(), alphabeticalOrder);
    for(int i = 0; i < n; i++){
        cout << find(names2.begin(), names2.end(), names1[i]) - names2.begin() << " ";
    }
}
