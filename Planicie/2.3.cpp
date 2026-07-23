#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long qntd; cin>>qntd;
    vector<string> nomes;
    while(qntd--){
        string nome; cin>>nome;
        auto it = find(nomes.begin(), nomes.end(), nome);
        if(it == nomes.end()){
            nomes.push_back(nome);
        }
    }

    for(string n:nomes) cout << n << '\n';
    return 0;
}
