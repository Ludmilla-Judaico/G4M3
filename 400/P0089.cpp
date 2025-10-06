#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2; cin >> n1 >> n2;
    for(int i=1 ; i<29 ; i++) if(i != n1 && i!= n2) cout << i << '\n';
    return 0;
}