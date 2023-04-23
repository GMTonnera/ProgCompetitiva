#include<bits/stdc++.h>

using namespace std;

int main(){
    int count = 1, maxCount = 0;
    string dna;

    cin >> dna;

    for(int i = 0; i < (int) dna.length(); i++){
        if(dna[i] == dna[i+1]){
            count++;
        } else{
            if(count > maxCount){
                maxCount = count;
                
            }
            count = 1;   
        }
    }

    cout << maxCount;
    return 0;
}