#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin >> n >> k;
    if(n%2==0) cout << "YES\n";
    else if(k==1) cout << "YES\n";
    else if(k==n) cout << "YES\n";
    else{
        if((n-k)%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
    
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