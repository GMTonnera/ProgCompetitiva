#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string str1, str2;
    char aux;
    char v[26];
    cin >> str1;
    cin >> str2;

    for(int i = 0; i < (int) str1.length(); i++){
        v[(int) str1[i] - 97] = str2[i];
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str1;
        for(int j = 0; j < (int) str1.length(); j++){
            if((int) str1[j] < 58){
                cout << str1[j];
            } else if((int) str1[j] < 91){
                cout << (char) toupper(v[(int) str1[j] - 65]);
            } else{
                cout << v[(int) str1[j] - 97];
            }
        }
        cout << "\n";
    }
    return 0;
}