#include <bits/stdc++.h>
using namespace std;

// Function to check if 'small' is a subsequence of 'large'
bool isSubsequence(const string &small, const string &large) {
    int i = 0, j = 0;
    while (i < small.size() && j < large.size()) {
        if (small[i] == large[j]) i++;
        j++;
    }
    return i == small.size();
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> required_words(n);
    string forbidden_word;

    for (int i = 0; i < n; i++) {
        cin >> required_words[i];
    }
    cin >> forbidden_word;

    // Sort words by length first, then lexicographically
    sort(required_words.begin(), required_words.end(), [](const string &a, const string &b) {
        return a.size() < b.size() || (a.size() == b.size() && a < b);
    });

    // Construct the mascot name
    string mascot_name;
    for (const string &word : required_words) {
        mascot_name += word;
    }

    // If the forbidden word is NOT a subsequence, print the result
    if (!isSubsequence(forbidden_word, mascot_name)) {
        cout << "YES\n" << mascot_name << "\n";
        return;
    }

    // Try swapping adjacent words to break the forbidden subsequence
    for (int i = 0; i < n - 1; i++) {
        swap(required_words[i], required_words[i + 1]);
        string new_mascot_name;
        for (const string &word : required_words) {
            new_mascot_name += word;
        }
        if (!isSubsequence(forbidden_word, new_mascot_name)) {
            cout << "YES\n" << new_mascot_name << "\n";
            return;
        }
        swap(required_words[i], required_words[i + 1]); // Swap back if not valid
    }

    // If no valid name found, return NO
    cout << "NO\n";
}

int main() {
    solve();
    return 0;
}
