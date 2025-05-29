#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> v(n) ;

    for(auto &i:v) cin >> i;
    

    // for (int i=0; i<n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }  


    int min=v[0];
    int max =v[0];
    int count=0;

    for(int i=0; i<v.size(); i++){
        if(v[i]<min){
            count+=1;
            min=v[i];
        }
        else if(v[i]>max){
            count+=1;
            max=v[i];
        }
    }
    cout << count ;
}