#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==0) return 0;
        long long sum=(n * (n + 1)) / 2 ;
        cout << sum*sum;
}