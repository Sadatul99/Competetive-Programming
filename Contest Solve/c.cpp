#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &a,vector<int> &b){
    for(int i=0; i<a.size(); i++){
        if( a[i]>a[i+1]){
            a[i+1]= b[0]-a[i+1];
        }
    }
    return;
}

int main(){
    int x;
    cin >> x;


    for(int i=0; i<x; i++){

        int m,n;
        cin >> n >> m;
    
        vector<int> a;
        vector<int> b; 

        for(int i=0; i<n; i++){
            int a_i;
            cin >> a_i;
            a.push_back(a_i);
        }
        int m_i;
        cin >> m_i;
        b.push_back(m_i);

        if(is_sorted(a.begin(), a.end())){
            cout << "YES" << endl;
        }

        else{
            sort(a,b);
            if(is_sorted(a.begin(), a.end())){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }

        for(auto i:a){
            cout << i << " ";
        }
        cout <<endl;
        cout << b[0] << endl;
    }
}