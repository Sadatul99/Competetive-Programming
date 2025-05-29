#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;
    int count_h = count(s.begin(), s.end(), '-');
    int count_u = count(s.begin(), s.end(), '_');

    if(n<3) cout << 0 << endl;
    else if(count_h<2) cout << 0 << endl;
    else{
        if(count_u%2!=0) cout << n*3 << endl;
        else cout << n/2 << endl;
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