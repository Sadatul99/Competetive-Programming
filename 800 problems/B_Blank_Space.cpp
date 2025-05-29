#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count =0 , maxi = 0;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        if(a==0){
            count++;
            maxi= max(count, maxi);
        }
        else count=0;
    }
    cout << maxi << endl;
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