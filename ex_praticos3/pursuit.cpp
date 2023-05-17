#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, aux1 = 0, aux2 = 0, aux3, r = 0;
        priority_queue<int> pq1;
        priority_queue<int> pq2;
        priority_queue<int, vector<int>, greater<int>> pq1_1;
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> aux3;
            pq1.push(aux3);
        }
        
        for(int j = 0; j < n; j++){
            cin >> aux3;
            pq2.push(aux3);
        }

        for(int j = 0; j < n - n/4; j++){
            aux3 = pq1.top();
            aux1 += aux3;
            pq1.pop();
            pq1_1.push(aux3);
            aux3 = pq2.top();
            aux2 += aux3;
            pq2.pop();
        }

        while(aux1 < aux2){
            r++;
            n++;
            pq2.push(0);
            if(n % 4 == 0 and !pq1_1.empty()){
                aux1 -= pq1_1.top();
                pq1_1.pop();
            } else{
                aux2 += pq2.top();
                pq2.pop();
            }
            aux1 += 100;
        }
            
        cout << r << "\n";
    }
    return 0;
}