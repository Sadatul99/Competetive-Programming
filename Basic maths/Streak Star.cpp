#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,x;
        cin >> n >> x;
        //declare an vector
        vector <int> ls;
        int idx;
        for(int i=0; i<n; i++){
            int e;
            cin >> e ;
            if(ls[i]>=ls[i-1]){
                ls.push_back(e);
            }
            else{
                idx=i;
            }
        }
        
    } 
}
