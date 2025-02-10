#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int>& arr) {
        // for(int i=0; i<arr.size(); i++){
            
        // }
        int sum = 0;
        int i=0;
        while( i <arr.size()-1){
            
            if(arr[i]==0){
                sum = -1;
                return sum;
            }
            
            sum+=1;
            
            i+= arr[i];
        }
        
        return sum;
    };

int main() {
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    
    int result = minJumps(arr);
    cout << "Minimum jumps needed: " << result << endl;

    return 0;
}