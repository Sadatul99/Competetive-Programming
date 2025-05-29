#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    string s;
    cin >> s;
    char prev = '0';
    for (int i = 0; i < n; i++)
    {
        if (s[i] != prev)
        {
            cnt++;
        }
        prev = s[i];
    }
    cout << cnt << endl;
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