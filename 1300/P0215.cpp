#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll qntd_pilhas, intervalo; cin >> qntd_pilhas >> intervalo;

    vector<ll> pilhas(qntd_pilhas);
    for(ll &p : pilhas) cin >> p;
    
    ll l=0, r=intervalo-1, prata=0, acc=0;

    vector<ll> acumulados(qntd_pilhas+1);
    for(ll i=0 ; i<qntd_pilhas ; i++){
        acc^=pilhas[i];
        acumulados[i+1] = acc;
    }

    while(l <= qntd_pilhas-intervalo){
        ll p=acumulados[r+1]^acumulados[l];
        if(p > prata) prata=p;
        l++;
        r++;
    }
    cout << prata << '\n';
    return 0;
}