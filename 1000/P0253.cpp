#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long qntd; cin >> qntd;
    long long menor = LLONG_MAX;
    long long cont = qntd;

    while(qntd--){
        vector<long long> nums(3);
        for(auto &n:nums){
            cin >> n;
        }

        long long maior;
        auto it = max_element(nums.begin(), nums.end());

        if(it != nums.end()){
            long long maior = *it;
            long long indice = std::distance(nums.begin(), it);

            long long a=0, b=0;
            for(long long i=0 ; i<3 ; i++){
                if(i != indice){
                    if(a){
                        b = nums[i];
                    }else{
                        a = nums[i];
                    }
                }
            }

            if(a*a + b*b == maior*maior){
                if(a+b+maior < menor){
                    menor = a+b+maior;
                }
            }else{
                cont--;
            }
        }
        
    }

    if(cont == 0){
        cout << -1 << '\n';
    }else{
        cout << menor << '\n';
    }

    return 0;
}
