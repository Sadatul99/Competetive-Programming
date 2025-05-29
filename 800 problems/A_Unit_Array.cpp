#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int pos=0 ,neg=0, steps=0;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        if(a>0)  pos++;
        else if(a<0) neg++;
    }
    while(pos<neg || neg%2!=0){
        pos++; neg--;
        steps++;
    }
    cout << steps << endl;
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