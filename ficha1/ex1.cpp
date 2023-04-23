#include<bits/stdc++.h>

using namespace std;

int main(){
    float n, r, m, p;
    scanf("%f %f",&n, &r);
    scanf("%f %f",&m, &p);
    double r1, r2;
    r1 = r/n;
    r2 = p/m;
    if(r2 < r1){
        printf("Promocao");
    } else{
        printf("Enganacao");
    }
}