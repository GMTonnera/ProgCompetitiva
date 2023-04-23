#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double count = 0, grade = 0;
    cin >> n;
    char a, b;
    for(int i = 0; i < n; i++){
        count++;
        cin >> a >> b;
        if(a == b){
            grade++;
        }
    }
    printf("Nota: %.2f", grade/count*10);

}