#include <bits/stdc++.h>
using namespace std;

int s(int x){
    int sx =0;
    while(x>0){
        sx+=x%10;
        x=x/10;
    }
    return sx;
}

bool solve(int x, int y){
    if (x==y) {
        return false;
    }

    for (int j=0; j<100000; j++){
        if(s(j)==x && s(j+1)==y){
            return true;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    for (int i=0; i<n; i++){
        int x,y; cin >> x >> y;
        if (solve(x,y)) cout << "yes\n";
        else cout << "no\n";
    }
}
