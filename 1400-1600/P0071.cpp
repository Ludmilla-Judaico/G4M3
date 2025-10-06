#include <bits/stdc++.h>
using namespace std;

int main(){
    int tam; cin >> tam;
    vector<int> nums(tam);
    for(int i=0 ; i < tam ; i++){
        cin >> nums[i];
    }

    bool invert=false;
    for(int i=tam-1 ; i >= 0 ; i--){
        if(nums[i] < 0){
            invert = !invert;
        }
        if(invert){
            nums[i] = -nums[i];
        }
    }
    for(int i=0 ; i < tam ; i++){
        cout << nums[i] << " ";
    }
    return 0;
}