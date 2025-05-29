#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long num) {
    long long sqrt_num = sqrt(num);
    return sqrt_num * sqrt_num == num;
}

vector<int> generatePerfectPermutation(int n) {
    vector<int> result;
    vector<bool> used(n + 1, false);
    long long currentSum = 0;
    
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 1; j <= n; j++) {
            if (!used[j] && !isPerfectSquare(currentSum + j)) {
                result.push_back(j);
                used[j] = true;
                currentSum += j;
                found = true;
                break;
            }
        }
        
        if (!found) {
            return {}; // No solution exists
        }
    }
    
    return result;
}

void solve() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << -1 << endl;
        return;
    }
    
    vector<int> permutation = generatePerfectPermutation(n);
    
    if (permutation.empty()) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << permutation[i];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
    }
    return 0;
}