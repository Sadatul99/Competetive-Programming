#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int n=x;
    long long revNum = 0;

    while (x != 0) {
        int lastDigit = x % 10;
        x = x / 10;
        revNum = (revNum * 10) + lastDigit;
        // Check for overflow
        if (revNum > INT_MAX || revNum < INT_MIN) {
            return 0; 
        }
    }
    // Check palindrome
    if(n==revNum){
        cout << revNum<< endl;
        cout << "true";
    }
    else{
        cout << "false";
    }
}
