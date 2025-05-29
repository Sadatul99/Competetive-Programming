#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n==1) {
        cout << "YES\n";
    }
    else if ((n-1)%3==0){
        cout << "YES\n";
    }
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