#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    if (k < -n * p || k > n * p) {
        cout << -1 << endl;
        return;
    } 
    k = abs(k);
    int min_ops = (k + p - 1) / p; 
    if (min_ops > n) {
        cout << -1 << endl;
    } else {
        cout << min_ops << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
