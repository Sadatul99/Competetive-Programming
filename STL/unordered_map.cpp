#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
    cout <<"size: "<< m.size() << endl;
    for(auto &pr : m){   //nlog(n)
        cout << pr.first << " "<< pr.second << endl;
    }
}

int main()
{
    unordered_map<int, string> m;
    m[1] = "abc";  // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});  
    print(m);
}