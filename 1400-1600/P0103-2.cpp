#include <bits/stdc++.h>
using namespace std;

int G(int x, int dias_solu) {
    return (int)ceil(x + (double)dias_solu / (x + 1));
}

int main(){
    int testes; cin >> testes;
    for(int i=0 ; i<testes ; i++) {
        int dias_cat, dias_solu, custo_dia; cin >> dias_cat >> dias_solu >> custo_dia;

        int ini = 1, fim = dias_solu, min_v = INT_MAX, min_p = 1;

        while(fim - ini > 3) {
            int mid1 = ini + (fim - ini) / 3;
            int mid2 = fim - (fim - ini) / 3;
            int valor1 = G(mid1, dias_solu);
            int valor2 = G(mid2, dias_solu);

            if(valor1 < valor2) {
                fim = mid2 - 1;
            } else {
                ini = mid1 + 1;
            }
        }

        for(int i = 1; i <= min(dias_solu, (int)sqrt(dias_solu) + 5) ; i++) {
            int valor = G(i, dias_solu);
            if(valor < min_v) {
                min_v = valor;
                min_p = i;
            }
        }

        if(min_v <= dias_cat) {
            cout << "WE CAN SAVE THE WORLD\n";
        } else {
            cout << "WE ARE DOOMED\n";
        }
        cout << min_p * custo_dia << '\n';
    }
    return 0;
}