#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> pessoas(n);
    for(ll &p : pessoas) cin >> p;
    for(ll p : pessoas){
        if(p > pessoas[n-1]) cout << p << '\n';
    }
    return 0;
}