#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
 
    bool f = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L')
            x--;
        else  x++;

        k--;
        if (x == 0) {
            f = 1;
            break;
        }
        if (k == 0) {
            cout << "0\n";
            return;
        }
    } // n
    if (f == 0) {
        cout << "0\n";
        return;
    }
 
    long long ans = 1;
    int t = 0;
    f = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            x--;
        } else
            x++;
        t++;
        if (x == 0) {
            f = 1;
            break;
        }
    } // n
    if (f)
        ans += k / t;
 
    cout << ans << '\n';
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
    }
    return 0;
}