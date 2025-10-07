#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll kits, times; cin >> kits>>times;
    ll nec=times*3;
    (kits > nec) ? cout << "MANTER ABERTAS\n" : cout << "FECHAR IMEDIATAMENTE\n";
    return 0;
}