#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long qntd_col; cin >> qntd_col;
    vector<long long> maiores;
    
    for(long long i=0 ; i<qntd_col ; i++){
        long long num; cin >> num;
        maiores.push_back(num);
    }

    for(long long i=0 ; i<qntd_col ; i++){
        long long num; cin >> num;
        if(num > maiores[i]){
            maiores[i] = num;
        }
    }

    for(long long i=0 ; i<qntd_col ; i++){
        if(i == qntd_col-1){
            cout << maiores[i] << '\n';
        }else{
            cout << maiores[i] << " ";
        }
    }
    return 0;
}
