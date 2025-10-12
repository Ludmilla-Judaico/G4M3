#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll ini; cin >> ini;
    vector<double> mov(8);
    for(double &m : mov) cin >> m;
    double saldo = ini, maior_saq = mov[0], maior_dep = mov[0];
    ll canc = 0;
    bool mov_saq=false, mov_dep=false;

    for(double m : mov){
        if(m < 0){
            if(-m <= saldo){
                saldo += m;
                if(-m > maior_saq) maior_saq = m;
                mov_saq = true;
            }else{
                canc += 1;
            }
        }else if(m > 0){
            saldo += m;
            mov_dep = true;
        }

        if(m > maior_dep && m > 0){
            maior_dep = m;
        }
    }

    if(mov_saq){
        cout << "Maior saque: " << fixed << setprecision(2) << -maior_saq << '\n';
    }else{
        cout << "SEM MOVIMENTO DE SAQUE" << '\n';
    }

    if(mov_dep){
        cout << "Maior deposito: " << fixed << setprecision(2) << maior_dep << '\n';
    }else{
         cout << "SEM MOVIMENTO DE DEPOSITO" << '\n';
    }
    cout << "Erros de saque: " << canc << '\n';
    cout << "Saldo final: R$ " << fixed << setprecision(2) << saldo << '\n';
    return 0;
}