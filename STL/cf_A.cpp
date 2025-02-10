#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool hasThreeDistinct(vector<int> a, vector<int> b, int n) {
    set<int> distinctValues;

    // Try different pairings to maximize distinct sums
    for (int i = 0; i < n; i++) {
        distinctValues.insert(a[i] + b[i]);
    }

    // If we already have 3 distinct values, return true
    if (distinctValues.size() >= 3) return true;

    // Try shuffling a to check if we can obtain 3 distinct values
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i], a[j]);  // Swap two elements in a
            distinctValues.clear();

            for (int k = 0; k < n; k++) {
                distinctValues.insert(a[k] + b[k]);
            }

            if (distinctValues.size() >= 3) return true;
            
            swap(a[i], a[j]);  // Swap back to original
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        if (hasThreeDistinct(a, b, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
