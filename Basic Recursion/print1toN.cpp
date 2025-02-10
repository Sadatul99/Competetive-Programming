#include <iostream>
using namespace std;

void printNos(int n) {
    if (n == 0) return; // Base case

    printNos(n - 1); 
    cout << n << " "; // Print after recursion
}


int main() {
    int n;
    cin >> n;
    printNos(n); 
    return 0;
}

// Expected Output: 1 2 3 4 5

// printNos(5)
//  ├─ printNos(4)
//  │   ├─ printNos(3)
//  │   │   ├─ printNos(2)
//  │   │   │   ├─ printNos(1)
//  │   │   │   │   ├─ printNos(0) → Base Case (returns)
//  │   │   │   │   ├─ cout << 1
//  │   │   │   ├─ cout << 2
//  │   │   ├─ cout << 3
//  │   ├─ cout << 4
//  ├─ cout << 5