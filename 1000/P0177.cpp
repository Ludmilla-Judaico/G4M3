#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long tam, mod; cin>>tam>>mod;
    vector<vector<long long>> matriz(tam, vector<long long>(tam, 0));
    matriz[0][0] = 1;
    for(long long i=0 ; i<tam-1 ; i++){
        for(long long j=0 ; j<tam-1 ; j++){
            matriz[i][j+1] = (matriz[i][j] * 2) % mod;
            matriz[i+1][j] = (matriz[i][j] * 2) % mod;
        }
    }

    matriz[tam-1][tam-1] = (matriz[tam-2][tam-1] * 2) % mod;

    for(long long i=0 ; i<tam ; i++){
        for(long long j=0 ; j<tam ; j++){
            if(j < tam-1){
                cout << matriz[i][j] << " ";
            }else{
                cout << matriz[i][j] << '\n';
            }
        }
    }

    return 0;
}
