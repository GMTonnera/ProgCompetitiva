#include<bits/stdc++.h>

using namespace std;

int main(){
    // Variables
    long int n;
    // Get n
    cin >> n;
    cout << n << " ";

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        } else{
            n = n * 3;
            n += 1;
        }
        cout << n << " ";    
    }
}