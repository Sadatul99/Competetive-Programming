#include <iostream>
#include <cmath>

using namespace std;

// Calculate sum of digits for a given number
int sumOfDigits(long long n) {
    int total = 0;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    return total;
}


bool canExist(int x, int y) {
    if (x > 1000 || y > 1000) {
        return false;
    }
    
    if (x == (9 * (x / 9)) && y == 1) {
        return true;
    }
    
    
    if (abs(x - y) > 9) {
        return false;
    }
    
    
    if (x == y) {
        
        if (x % 9 == 0) {
            return false;
        }
        return true;
    }
    
    
    if (x < y && y - x != 1) {
        return false;
    }
    
    if (x > y && x - y > 8) {
        return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << (canExist(x, y) ? "YES" : "NO") << endl;
    }
    
    return 0;
}