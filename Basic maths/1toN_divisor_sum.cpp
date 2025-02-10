#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int func(int x)
    {
        int sum = 0;
        for (int i = 1; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                sum = sum + i;
                if (x / i != i)
                {
                    sum = sum + x / i;
                }
            }
        }
        return sum;
    }
    int sumOfDivisors(int n)
    {
        int sf = 0;
        for (int i = 0; i <= n; i++)
        {
            sf = sf + func(i);
        }
        return sf;
    }
    int main()
    {
        Solution sol;
        int n;
        cin >> n;
        cout << sol.sumOfDivisors(n) << endl;
        return 0;
    }
};
