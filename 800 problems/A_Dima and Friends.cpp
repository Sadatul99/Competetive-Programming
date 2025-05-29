#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    
    int ways = 0;
    for(int i=1; i<6; i++){
        if ((sum+i) % (n + 1) != 1){
            ways += 1;
        }
    }
    cout << ways;

}