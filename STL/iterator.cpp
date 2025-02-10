#include <bits/stdc++.h>
using namespace std;

// void printVec(vector<pair<int,int>> &v)
// void printVec(vector<int> &v)
// {
//     cout << "size:" << v.size() << endl;
//     for (int i = 0; i < v.size(); ++i){
//         // v.size --> O(1)
//         cout << v[i]<< " ";
//     } 
//     cout << endl;
// }
int main(){
    vector<int> v ={2,3,5,6,7};
    for(int i =0; i<v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
    // vector <int> :: iterator it =v.begin();
    // // cout <<(*it) << endl;
    // for(it = v.begin(); it<v.end(); ++it){
    //     cout << (*it) << endl;
    // }
    cout << endl;
    vector <pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector <pair<int,int>> :: iterator it;
    for (it = v_p.begin(); it!=v_p.end(); ++it){
        cout << (*it).first << " "<< (*it).second<< endl;
    };
    for (it = v_p.begin(); it!=v_p.end(); ++it){
        cout << (it->first) << " "<< (it->second)<< endl;
    }
    // (*it).first = (it->first)
}