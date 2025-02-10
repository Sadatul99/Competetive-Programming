#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    cout <<"size: "<< s.size() << endl;
    for(string value : s){   //nlog(n)
        cout << value << endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("zsdf");
    s.insert("bcd");
    auto it = s.find("abc");  // log(n)
    if (it!= s.end()){
        // cout <<(*it);
        s.erase(it);
    }
    print(s);
}