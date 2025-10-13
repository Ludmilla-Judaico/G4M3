#include <bits/stdc++.h>
using namespace std;

int main(){
    int antenas; cin >> antenas;
    vector<int> sinais(antenas);
    for(int &a : sinais) cin >> a;
    sort(sinais.begin(), sinais.end());
    int tam = sinais.size();
    int r = sinais[1] - sinais[0];
    ((sinais[0] + (tam - 1) * r) == sinais[tam-1]) ? cout << "TRUE\n" : cout << "FALSE\n";
    return 0;
}