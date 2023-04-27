#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux, count = 0, max = 0;
    cin >> n;
    vector<int> money;
    
    string nums;
    getline(cin, nums);
    getline(cin, nums);
    stringstream iss(nums);

    while(iss >> aux){
        money.push_back(aux);
        if(aux > max){
            max = aux;
        }
    }

    for(int i = 0; i < n; i++){
        if(money[i] < max){
            aux = max - money[i];
            count += aux;            
            money[i] += aux;
        }
    }
    cout << count;
}
