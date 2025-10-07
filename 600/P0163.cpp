#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    double meta=10000.00, arrecadado=0.00;
    ll receb=0;
    while(arrecadado < meta){
        double doacao; cin >> doacao;
        arrecadado+=doacao;
        receb+=1;
    }
    cout << "Total arrecadado: R$ " << fixed << setprecision(2) << arrecadado << '\n';
    cout << "Doacoes recebidas: " << receb << '\n';
    cout << "Valor extra arrecadado: R$ " << fixed << setprecision(2) << arrecadado-meta << '\n';
    return 0;
}