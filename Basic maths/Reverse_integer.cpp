#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    long long revNum = 0;

    while (x != 0) {
        int lastDigit = x % 10;
        x = x / 10;

        revNum = (revNum * 10) + lastDigit;

        cout << "Intermediate reversed: " << revNum << endl;

        // Check for overflow
        if (revNum > INT_MAX || revNum < INT_MIN) {
            cout << "Overflow detected!" << endl;
            return 0; // Return 0 as per typical integer reversal problem constraints
        }
    }

    cout << "Final reversed number: " << revNum << endl;
    return 0;
}
