#include <bits/stdc++.h>
using namespace std;

// Pair
int main(){
    pair <int,string> p;
    // p = make_pair(2,"abc");
    // Another way to set pair value
    p ={2, "abcd"};
    pair<int,string> &p1 =p; //pass by reference using & 
    p1.first = 3;
    cout << p.first << " " << p.second<<endl;
    int a[] = {1,2,3};
    int b[] = {2,4,6};
    pair <int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,4};
    p_array[2]={3,6};

    for(int i =0; i<3; ++i){
        cout << p_array[i].first << " " <<p_array[i].second<< endl;
    }
}