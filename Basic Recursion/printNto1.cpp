#include <iostream>
using namespace std;

void printNos(int n) {
    if (n == 0) return; // Base case

    cout << n << " "; // Print before recursion
    printNos(n - 1); 
}


int main() {
    int n;
    cin >> n;
    printNos(n); 
    return 0;
}

// Expected Output: 5 4 3 2 1