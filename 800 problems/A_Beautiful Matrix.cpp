#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat(5, vector<int>(5,0));
    pair<int, int> index;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cin >> mat[i][j];
            if(mat[i][j]==1){
                index =  {i, j};
            }
        }
    }

    int steps=0;
    if(index.first<2) steps+=2-index.first; else steps+=index.first -2;
    if(index.second<2) steps+=2-index.second; else steps+=index.second -2;

    cout << steps;
    

}
