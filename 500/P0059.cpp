#include <bits/stdc++.h>
using namespace std;

int main(){
    string f; cin >> f;
    int tam = f.size();
    bool resp = false;
    for(int c=0 ; c<tam-1 ; c++){
        if((f[c] == 'o' && f[c+1] == 'O') || (f[c+1] == 'o' && f[c] == 'O')){
            resp = true;
            break;
        }
    }
    (resp) ? cout << "YES\n" : cout << "NO\n";
    
    return 0;
}