#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2; cin >> n1 >> n2;
    if(n1 > n2) cout << n1 << '\n';
    if(n1 < n2) cout << n2 << '\n';
    if(n1 == n2) cout << "PEGADINHA\n";
    return 0;
}