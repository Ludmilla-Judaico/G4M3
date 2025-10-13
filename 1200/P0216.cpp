#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll qntd, num; cin >> qntd >> num;
    vector<ll> part(qntd);
    for(ll &p : part) cin >> p;
    ll l=0, r=0, soma=0;
    while(soma != num && r<qntd){
        if(soma < num){
            soma+=part[r];
            r++;
        }else{
            soma-=part[l];
            l++;
        }
    }
    (soma == num) ? cout << "YES\n" : cout << "NO\n"; 
    return 0;
}