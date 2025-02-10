#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;

        char second_last = x[x.length() - 2];
        char last = x[x.length() - 1];

        if (last == second_last)
        {
            x.erase(x.length() - 2, 2);
            x.push_back(x[0]);
        }
    }
}