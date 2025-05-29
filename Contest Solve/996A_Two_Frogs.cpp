#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n,a,b; cin >> n >> a >> b;

        if(a>b){
            if(a-b==1) cout <<"no\n";
            else if((a-b)%2==0) cout <<"yes\n";
        }
        else if(b>a){
            if(b-a==1) cout <<"no\n";
            else if((b-a)%2==0) cout <<"yes\n";
        }
        else cout <<"no\n";
    }
}