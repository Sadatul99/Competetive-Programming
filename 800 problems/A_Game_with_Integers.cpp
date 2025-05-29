#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n%3==0) cout << "Second\n" ;
    else cout << "First\n" ;
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