#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, d = 0, aux;
    vector<int> v;
    cin >> n;
    
    string nums;
    getline(cin, nums);
    getline(cin, nums);

    stringstream iss(nums);
    while(iss >> aux){
        v.push_back(aux);
    }

    sort(v.begin(), v.end(), less<int>());
    aux = 1;
    for(int i = 0; i < n; i++){
        if(v[i] >= aux){
            aux++;
            d++;
        }
    }
    cout << d;
}