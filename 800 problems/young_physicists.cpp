#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<3; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    int x=0;
    int y=0;
    int z=0;
    for(auto i: v){
        x+=i[0];
        y+=i[1];
        z+=i[2];
    }
    if(x==0 && y==0 && z==0){
        cout << "YES";
    }
    else{
        cout<<"NO";
    }

}