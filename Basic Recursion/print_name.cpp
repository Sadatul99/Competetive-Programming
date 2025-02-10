#include <iostream>
using namespace std;

void printGfg(int N)
{
    if (N == 0) return; // Base case
    cout << "GFG" << " "; // Print after recursion
    printGfg(N - 1);
}

int main()
{
    int n;
    cin >> n;
    printGfg(n);
    return 0;
}