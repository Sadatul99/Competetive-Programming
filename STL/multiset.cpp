#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    cout << "size: " << s.size() << endl;
    for (string value : s)
    { // nlog(n)
        cout << value << endl;
    }
}
int main()
{
    multiset<string> s;
    s.insert("abc"); // o(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    auto it = s.find("abc"); // o(log(n))
    if(it != s.end()) { 
    s.erase(it);
    }
    // s.erase("bcd");
    print(s);
}