#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tam; cin >> tam;
    vector<int> nums(tam);
    for(int i=0 ; i < tam ; i++){
        cin >> nums[i];
    }
    for(int i=0 ; i < tam ; i++){
        if(nums[i] < 0){
            for(int j=i ; j > -1 ; j--){
                nums[j] = nums[j]*-1;
            }
        }
    }
    for(auto num : nums){
        cout << num << ' ';
    }
    return 0;
}