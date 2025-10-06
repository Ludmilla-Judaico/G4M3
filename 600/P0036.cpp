#include <bits/stdc++.h>
using namespace std;

int main(){
    string w; cin >> w;
    int tam = w.size();
    for(int i=0 ; i<tam ; i++){
        for(int j=0 ; j<tam ; j++){
            if(j == i){
                char l = toupper(w[j]);
                cout << l;
            }else{
                char l = tolower(w[j]);
                cout << l;
            }
        } 
        cout << '\n';
    }
    return 0;
}