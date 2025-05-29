#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if (l == r && r == d && d == u) cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
