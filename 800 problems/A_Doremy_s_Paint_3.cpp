#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> v, int n){
    for(auto i: v){
        int Count = count(v.begin(), v.end(), i);
        if(Count==n/2){
            return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    if(f(v,n)) cout << "YES\n"; 
    else cout << "NO\n";
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