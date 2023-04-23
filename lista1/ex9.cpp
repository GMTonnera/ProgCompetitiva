#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, minL = 0, maxL = 0, minC = 0, maxC = 0;
    cin >> n >> m;
    
    string aux;
    vector<pair<int, int>> coords;
    for(int i = 0; i < n; i++){
        cin >> aux;
        for(int j = 0; j < m; j++){
            if(aux[j] == '1'){
                coords.push_back(pair<int, int>(i+1,j+1));
            }
        }
    }
    if(coords.size() == 0){
        cout << "0x0";
    } else{
        for(int i = 0; i < (int) coords.size(); i++){
            if(i == 0){
                minL = coords[i].first;
                maxL = coords[i].first;
                minC = coords[i].second;
                maxC = coords[i].second;
            } else{
                if(coords[i].first < minL){
                    minL = coords[i].first;
                }
                if(coords[i].first > maxL){
                    maxL = coords[i].first;
                }
                if(coords[i].second < minC){
                    minC = coords[i].second;
                }
                if(coords[i].second > maxC){
                    maxC = coords[i].second;
                }
            }
        }
        cout << maxC - minC+1<< "x" << maxL - minL +1;
    }   
}