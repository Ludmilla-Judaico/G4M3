#include <bits/stdc++.h>
using namespace std;

int main(){
    int pes, colhidos, prod; cin >> pes >> colhidos >> prod;
    int esperado = pes * prod;
    (esperado > colhidos) ? cout << "SIM\n" : cout << "NAO\n";
    return 0;
}