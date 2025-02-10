#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i){
        // v.size --> O(1)
        cout << v[i] << " ";
    } 
    cout << endl;
}
int main()
{
    vector<int> vec(10,3); // this is how to give size
    printVec(vec);


    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        printVec(v);
        v.push_back(x); // --> O(1)
    }
    printVec(v);

    // v.pop_back();
    // printVec(v);

    vector<int> v2 = v; // --> O(n)
    v2.push_back(6);
    printVec(v2);

}