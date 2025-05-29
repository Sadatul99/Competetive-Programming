#include <bits/stdc++.h>
using namespace std;

bool contains3dots(const string &s) {
    return s.find("...") != string::npos;
}

void solve()
{
    int n; string s;
    cin >> n >> s;
    int dot=0;
    for(int i=0; i<n; i++){
        if(s[i]=='.'){
            dot+=1;
        }
    }
    if(contains3dots(s)) cout << 2 << endl;
    else cout << dot << endl;
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