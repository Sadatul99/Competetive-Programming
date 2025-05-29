#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    // even n
    if (n % 2 == 0){
        // For odd  numbers
        if (k <= n/2) cout << k * 2 - 1;    
        // For even numbers
        else cout << (k - n / 2) * 2; 
    }

    // odd n
    else{
        // For odd  numbers
        if (k <= (n/2+1)) cout << k * 2 - 1;    
        // For even numbers
        else cout << (k - (n/2 +1)) * 2;
    }
}