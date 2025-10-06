#include <bits/stdc++.h>
using namespace std;

int main(){
    string texto, novo_t; cin >> texto;
    cout << texto << '\n';
    for(char l : texto){
        cout << l << " ";
        if(l != 'P'){
            novo_t.push_back(l);
        }
    }
    cout << novo_t << '\n';
    return 0;
}