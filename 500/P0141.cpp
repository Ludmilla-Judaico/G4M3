#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums(3);
    for(int &n : nums) cin >> n;
    sort(nums.begin(), nums.end());
    for(int n : nums) cout << n << '\n';
    return 0;
}