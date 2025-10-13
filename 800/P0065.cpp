#include <bits/stdc++.h>
using namespace std;

int main(){
    int linhas; cin >> linhas;
    vector<string> palavras;
    
    for(int i=0 ; i<linhas ; i++){
        string p; cin >> p;
        palavras.push_back(p);
    }

    int carac = 144;
    int cont = 0;
    while(carac > 0){
        int tam = palavras[cont].size();
        if(tam <= carac){
            cout << palavras[cont] << '\n';
            carac -= tam;
        }else{
            carac = 0;
        }
        cont+=1;
    }
    return 0;
}