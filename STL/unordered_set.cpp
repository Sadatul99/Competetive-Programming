#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
    cout <<"size: "<< s.size() << endl;
    for(string value : s){   //nlog(n)
        cout << value << endl;
    }
}

int main(){
    unordered_set<string> s;
    s.insert("abc"); //O(n)
    s.insert("zsdf");
    s.insert("bcd");
    auto it = s.find("abc");  // O(n)
    if (it!= s.end()){
        // cout <<(*it);
        s.erase(it);
    }
    print(s);
}