#include <bits/stdc++.h>
using namespace std;
/* Given N strings, print unique strings in lexiographical order with their frequency N-<= 10^5 
|S| <= 100
*/
// input:  
// 8 
// abc 
// def 
// abc 
// ghj 
// jkl 
// ghj 
// ghj 
// abc

int main(){
    map <string,int> m;
    int n;
    cin >> n;
    for (int i=0; i<n; ++i){
        string s;
        cin >> s;
        m[s]= m[s]+1;
        // m[s]++;
    }
    for(auto pr: m){
        cout << pr.first <<" " << pr.second<<endl;
    }
}