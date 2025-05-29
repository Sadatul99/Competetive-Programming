#include <iostream>
#include <vector>
using namespace std;

int count_fizzbuzz(int n) {
    vector<int> cycle = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}; // Precomputed valid numbers in the first 15
    return (n / 15) * 3 + cycle[n % 15];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        results[i] = count_fizzbuzz(n);
    }

    for (int result : results) {
        cout << result << "\n";
    }

    return 0;
}
