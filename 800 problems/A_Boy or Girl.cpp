#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<char> dv;
    for (int i =0; i<s.size(); i++){
        if(find(dv.begin(), dv.end(), s[i]) == dv.end()){ // If s[i] is not in dv
            dv.push_back(s[i]);
        }
        
    }

    if(dv.size()%2==0) cout << "CHAT WITH HER!"<<endl;
    else cout << "IGNORE HIM!"<<endl;

    // for (int i=0; i<dv.size(); i++){
    //     cout << dv[i] <<" ";
    // }

} 