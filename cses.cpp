#include <bits/stdc++.h>

using namespace std;

int main() {
  long long tam; cin>>tam;
  vector<long long> nums(tam); for(long long &n:nums) cin>>n;
  
  sort(nums.begin(), nums.end());
  long long maior = nums[tam-1];

  vector<long long> freq(maior+1, 0);
  for(long long i=0 ; i<tam ; i++){
    freq[nums[i]]++;
  }
  long long gcd=maior;
  
  for(long long j=maior ; j>0 ; j--){
    long long cont=0;
    
    for(long long g=j ; g<=maior ; g+=j){
      cont+=freq[g];
      
      if(cont == 2){
        gcd = j;
        break;
      } 
    }
    if(cont == 2) break;
  }

  cout << gcd << '\n';
  
  return 0;
}
