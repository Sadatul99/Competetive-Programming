#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum =0;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        sum+=a;
    }
    if(sum%2==0) cout << "YES\n";
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