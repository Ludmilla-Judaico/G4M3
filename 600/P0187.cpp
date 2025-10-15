#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll tam ; cin >> tam;
    string cores ; cin >> cores;
    bool resp=true;
    for(ll i=0 ; i<tam-2 ; i++){
        if(!(cores[i] != cores[i+1] && cores[i] != cores[i+2] && cores[i+1] != cores[i+2])){
            resp = false;
        }
    }
    (resp) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}