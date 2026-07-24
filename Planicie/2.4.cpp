#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    vector<string> frases;
    for(long long i=0 ; i<4 ; i++){
        string f;
        getline(cin, f);
        frases.push_back(f);
    }

    vector<string> palavras;
    for(long long i=0 ; i<4 ; i++){
        long long posi = frases[i].rfind(' ');

         if(posi == std::string::npos){
            palavras.push_back(frases[i]);
         }else{
            palavras.push_back(frases[i].substr(posi + 1));
         }
    }

    long long cont1 = 0, cont2 = 0;
    for(long long i=palavras[0].size()-1 ; i>-1 ; i--){
        if(palavras[0][i] == palavras[2][i]) cont1++;
        else break;
    }

    for(long long i=palavras[1].size()-1 ; i>-1 ; i--){    
        if(palavras[1][i] == palavras[3][i]) cont2++;
        else break;
    }

    cout << cont1+cont2 << '\n';
    
    return 0;
}
