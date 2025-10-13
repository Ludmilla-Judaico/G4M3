#include <bits/stdc++.h>
using namespace std;

int main(){
    int candidatos, qntd_notas; cin >> candidatos >> qntd_notas;
    vector<int> notas(candidatos) ; for(int &nota : notas) cin >> nota;
    vector<int> cortes(qntd_notas); for(int &corte : cortes) cin >> corte;
    sort(notas.begin(), notas.end());

    for(int corte : cortes){
        cout << corte << ' ';
        int ini=-1, fim=candidatos-1;
        while(fim-ini>1){
            int lim = (fim+ini)/2;
            if(notas[lim] < corte){
                ini=lim;
            }else{
                fim=lim;
            }
        }
        if(notas[fim] > corte){
            cout << candidatos-fim << '\n';
        }else{
            cout << 0 << '\n';
        }
    }
    return 0;
}