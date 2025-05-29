#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string x;
        cin >> x;
        x.erase(x.length() - 2, 2);
        x.push_back('i');
        cout<< x <<endl;
    }
}