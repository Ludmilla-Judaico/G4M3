#include <bits/stdc++.h>
using namespace std;

int main(){
    int m; cin >> m;
    unsigned long long soma=1;
    for(int i=0 ; i<m ; i++){
        soma*=2;
    }
    cout << soma << '\n';
    return 0;
}