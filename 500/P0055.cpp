#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int n2=n*2;
    for(int i=n ; i<=n2 ; i++) if(i % 2 != 0) cout << i << '\n';
    return 0;
}