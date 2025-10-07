#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    vector<ll> nums(10);
    for(ll &n : nums) cin >> n;
    nums.push_back(nums[0]) ; nums.push_back(nums[1]);

    ll total=0; 
    for(int i=0 ; i<10 ; i++){
        total += (nums[i] + nums[i+1] + nums[i+2]);
    }
    cout << total << '\n';
    return 0;
}