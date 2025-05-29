#include <bits/stdc++.h>
using namespace std;


bool isSubsequence(string a, string s) {
    int aIndex = 0;
    int aLength = a.length();
    int sLength = s.length();
    
    // Empty string is always a subsequence
    if (aLength == 0) return true;
    
    // If a is longer than s, it can't be a subsequence
    if (aLength > sLength) return false;
    
    for (int i = 0; i < sLength; i++) {
        if (s[i] == a[aIndex]) {
            aIndex++;
            // If we've matched all characters in a
            if (aIndex == aLength) return true;
        }
    }
    
    // If we haven't matched all characters in a
    return false;
}

void solve()
{
    int n;
    cin >> n;
    string s ="" ;
    for(int i=0; i<n; i++){
        string si ; cin >> si;
        s+=si;
    }
    string prev; cin >> prev;
    
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