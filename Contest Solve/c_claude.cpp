#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool canSort(int n, vector<ll>& a, ll b1) {
    // Try all possible combinations of operations using bitmask
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<ll> transformed(n);
        // Apply operations based on bitmask
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                // Apply operation: ai = b1 - ai
                transformed[i] = b1 - a[i];
            } else {
                // Keep original value
                transformed[i] = a[i];
            }
        }
        
        // Check if array is sorted in non-decreasing order
        bool isSorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (transformed[i] > transformed[i + 1]) {
                isSorted = false;
                break;
            }
        }
        
        if (isSorted) {
            return true;
        }
    }
    return false;
}

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<ll> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        
        // Since m = 1 in this version
        bool possible = canSort(n, a, b[0]);
        cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}