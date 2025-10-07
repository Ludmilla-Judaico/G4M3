#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll times, problemas; cin >> times>>problemas;
    vector<ll>resolvidos(times);
    for(ll &n : resolvidos) cin >> n;
    ll soma=0;
    for(ll n : resolvidos){
        soma+=(problemas-n);
    }
    cout << soma << '\n';
    return 0;
}