#include <bits/stdc++.h>
using namespace std;
//Yona e a enciclopédia
int main(){
    int n_pag, n_palavras ; cin >> n_pag >> n_palavras;
    vector<string> enciclo(n_pag * n_palavras);
    
    for(string &palavra : enciclo) cin >> palavra;
    
    int qtd; cin >> qtd;
    vector<string> perguntas(qtd) ;
    for(string &p : perguntas) cin >> p;

    for(string p : perguntas){
        cout << p << " ";
        int ini=0, fim=(n_pag*n_palavras) - 1;
        int r=0;
        while(enciclo[r] != p){
            int lim = (fim+ini)/2;
            if(enciclo[lim] == p){
                r=lim;
            }
            if(enciclo[lim] < p){
                ini = lim+1;
            }else if(enciclo[lim] > p){
                fim = lim-1;
            }
        }
        int posi = (r/n_palavras)+1;
        cout << posi << '\n';
    }
    return 0;
}