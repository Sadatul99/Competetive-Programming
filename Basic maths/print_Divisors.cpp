#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    vector<int> ls;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){
                ls.push_back(n/i);
            }
        }
    }
    //sort the vector
    sort(ls.begin(),ls.end());
    // print vector
    for(auto it : ls) cout<< it <<" ";
}
