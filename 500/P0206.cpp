#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0 ; i<t ; i++){
        int a, b, c ; cin >> a>>b>>c;
        cout << a << " ";
        for(int j=a+c ; j<=b ; j+=c) cout << j << " ";
        cout << '\n';
    }
    return 0;
}