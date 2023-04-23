#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    bool k = true;
    cin >> n;
    string num = to_string(n);
    for(int i = 0; i < (int) num.length(); i++){
        // cout << num[i] << " " << i << "\n";
        if(num[i] == '1'){
            if(num[i+1] == '4'){
                i++;
                if(num[i+1] == '4'){
                    i++;
                }
            }
        }else{
            k = false;
            break;
        }
    }
    if(k){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}

    