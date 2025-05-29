#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b>> c>> d;
    int x =c /floor(a/b) ;
    int y = d /floor(a/b);
    cout << x <<" "<< y << endl;
    
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