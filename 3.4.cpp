#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    string palavra;
    vector<string> fila;
    while(cin>>palavra){
        if(palavra == "FIM") break;

        if(palavra != "PROXIMO"){
            fila.push_back(palavra);
            cout << "FILA: ";
            for(long long i=0 ; i<fila.size() ; i++){
                if(i == fila.size()-1) cout << fila[i] << '\n';
                else cout << fila[i] << " ";
            }
        }else{
            cout << "PROXIMO: " << fila[0] << '\n';
            fila.erase(fila.begin());
        }
    }

    return 0;
}
