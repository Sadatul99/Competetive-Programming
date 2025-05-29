#include <bits/stdc++.h>
using namespace std;

bool is_distinc(string y){
    if(y[0]!=y[1] && y[0]!=y[2] && y[0]!=y[3] && y[1]!=y[2] && y[1]!=y[3] && y[2]!=y[3]){
        return true;
    }
    return false;
}

int main(){
    int x; cin >> x;
    int pos=x;
    while(pos<=9999){
        pos+=1;
        string y = to_string(pos);
        if(is_distinc(y)){
            break;
        }
    }
    cout << pos <<endl;
    

}