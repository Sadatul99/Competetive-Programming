#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    int op=0;
    for(int i=0; i<n-1; i++){
        if((v[i]%2)==(v[i+1]%2)) op++;
    }
    cout << op << endl;
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