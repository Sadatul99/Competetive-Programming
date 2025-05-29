#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    int ans =-1;
    vector <int> v;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
        if (a==2){
            cnt++;
        } 
    }

    if(cnt==0){
        ans=1;
    }

    else if (cnt%2==0){
        int temp=cnt/2;
        int idx =0;
        while(temp>0){
            if(v[idx]==2) temp--;
            idx++;
        }
        ans=idx;
    }
    
    cout << ans << endl;
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