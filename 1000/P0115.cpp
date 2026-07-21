#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long qntd; cin >> qntd;
    vector<long long> cartas;
    for(long long i=0 ; i<qntd ; i++){
        long long num; cin>>num;
        auto it = find(cartas.begin(), cartas.end(), num);
        if(it != cartas.end()){
            for(long long j=0 ; j<cartas.size() ; j++){
                if(j == cartas.size()-1) {
                    cout << cartas[j] << '\n';
                }else{
                    cout << cartas[j] << " ";
                }
            }
        }else{
            cartas.push_back(num);
        }
    }

    return 0;
}
