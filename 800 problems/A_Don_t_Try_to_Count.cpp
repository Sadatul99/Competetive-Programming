#include <bits/stdc++.h>
using namespace std;

bool contain( string &current_x, string s) {
    return current_x.find(s) != string::npos;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    string x, s; 
    cin >> x >> s;

    int steps = 0;
    string current_x = x;
  
    while (current_x.size() < 40) {
        if (contain(current_x, s)) {
            cout << steps << endl;
            return;
        }
        current_x += current_x;
        steps++;
    }

    cout << -1 << endl; 
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