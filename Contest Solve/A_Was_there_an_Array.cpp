#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0; i<n-2; i++){
        int b; cin >> b; 
        v.push_back(b);
    }
    for(int j=0; j<n-4; j++){
        if(v[j]==1 && v[j+1]==0 && v[j+2]==1){
            cout << "NO\n";
            return ;
        } 
    }
    cout << "YES\n";   
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
    }
}