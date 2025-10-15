#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int tam=10, cont=0;
    vector<ll> notas(30);
    vector<ll> somas;
    for(auto &n : notas) cin >> n;
    
    while(tam--){
        int soma =0;
        for(int i=cont ; i<=30 ; i+=10){
          soma += notas[i];
        }
        somas.push_back(soma);
        cont +=1;
    }
    
    for(int s : somas) cout << s << '\n';
    return 0;
}