#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={2,3,5,6,7};
    for(int i =0; i<v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
     
    // vector <int> :: iterator it;
    // cout <<(*it) << endl;
    // for(it = v.begin(); it<v.end(); ++it){
    //     cout << (*it) << endl;
    // }

    // short code
    for(int value : v){  // for i in arr--->python
        cout << value << " " ;
    }
    cout << endl;

    for(auto &value : v){
        value++;
        cout << value << " " ;
    }
    cout << endl;

    // Auto keyword
    for(auto it = v.begin(); it<v.end(); ++it){
        cout << (*it) << endl;
    }
}