#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux;
    cin >> n;
    string nums;
    vector<int> v(200000, 0);

    getline(cin, nums);
    getline(cin, nums);

    stringstream iss(nums);
    while(iss >> aux){
        v[aux-1] = 1;
    }

    int num = find(v.begin(), v.end(), 0) - v.begin();
    cout << num+1;
}