#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            v.push_back(a);
        } 

        int even=0, odd=0;

        for(auto k:v) if(k%2==0) even++;
        
        odd=n-even;
        if(even>=1) cout << odd+1 <<endl;
        else cout << odd-1 <<endl;
    }
    
}