#include <bits/stdc++.h>

using namespace std;

int main() {
  long long tam; cin>>tam;
  vector<long long> nums(tam); for(long long &n:nums) cin>>n;
  map<long long,long long> freq;
  for(long long i=0 ; i<tam ; i++){
    freq[nums[i]]++;
  }
  sort(nums.begin(), nums.end());
  long long maior = nums[tam-1];
  
  for(auto n:nums) cout << n << " ";
  cout << '\n';
  
  long long gcd=1;
  for(long long j=maior ; j>0 ; j--){
    long long cont=0;
    
    for(long long g=j ; g<=maior ; g+=j){
      // cout << "cont: " << cont << '\n';
      if(freq.find(g) != freq.end()){
        // cout << "g: " << g << '\n';
        cont++;
      } 
      
      if(cont == 2){
        gcd = j;
        break;
      } 
    }
    if(cont == 2) break;
  }
  // cout << '\n';
  cout << gcd << '\n';
  
  return 0;
}
