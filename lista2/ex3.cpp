#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, b, aux;
    cin >> t;
    vector<int> boxes;

    for(int i = 0; i < t; i++){
        b = 0;
        aux = 0;
        cin >> b;
        boxes = {};
        for(int j = 0; j < b; j++){
            cin >> aux;
            boxes.push_back(aux);
        }
        sort(boxes.begin(), boxes.end());
        
        aux = 0;
        for(int j = 0; j < b; j++){
            if(boxes[0] < boxes[j]){
                aux += boxes[j] - boxes[0];
            }
        }
        cout << aux << "\n";
    } 

    return 0;
}