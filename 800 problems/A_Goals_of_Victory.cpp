#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum =0;
    for(int i=0; i<n-1; i++){
        int a; cin >> a;
        sum+=a;
    }
    cout << sum*(-1) << endl;
    
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