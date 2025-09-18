#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd; cin >> qtd;
    vector<int> nums;
    for(int i=0 ; i<qtd ; i++){
        int num ; cin >> num;
        nums.push_back(num);
    }
    
    int menor_p=nums[0], maior_l=0;
    for(int i=0 ; i<qtd ; i++){
        if(nums[i] < menor_p){
            menor_p = nums[i];
        }
        int lucro = nums[i] - menor_p;
        if(lucro > maior_l){
            maior_l = lucro;
        }
    }
    cout << maior_l << '\n';
    return 0;
}