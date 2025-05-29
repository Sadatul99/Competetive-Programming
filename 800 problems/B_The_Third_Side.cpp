#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n); 
    int sum=1; 
    for (int i = 0; i < n; i++) {
        cin >> v[i];     
        sum+=v[i];
    }
    
    if(n==1){
        cout << v[0]<< endl;
        return;
    }
    cout << sum-n << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {  
        solve();
    }
}
