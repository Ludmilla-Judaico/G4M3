#include <bits/stdc++.h>
using namespace std;

int main(){
    int linhas ; cin >> linhas;
    vector<int> nums(linhas); for(int &n : nums) cin >> n;
    if(linhas < 32){
        for(int i=0 ; i<linhas ; i++){
            cout << nums[i] << '\n';
        }
    }else{
        for(int i=0 ; i<32 ; i++){
            cout << nums[i] << '\n';
        }
    }
    return 0;
}