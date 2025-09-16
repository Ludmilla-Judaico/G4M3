#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd; cin >> qtd;
    vector<int> nums;
    for(int i=0 ; i<qtd ; i++){
        int num ; cin >> num;
        nums.push_back(num);
    }
    
    int maior=0;
    int dif=0;
    for(int i=0 ; i<qtd ; i++){
        for(int j=i+1 ; j<qtd ; j++){
            dif = nums[j]-nums[i];
            maior = max(maior, dif);
        }
    }
    cout << maior << '\n';
    return 0;
}