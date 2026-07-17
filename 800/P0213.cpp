#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long tam; cin>>tam;
    vector<vector<long long>> matriz(tam+2, vector<long long>(tam+2, 0));
    for(long long i=1 ; i < tam+1 ; i++){
        for (long long j=1 ; j < tam+1 ; j++){
            cin>>matriz[i][j];
        }
    }

    bool q = false;
    for(long long i=1 ; i < tam+1 ; i++){
        for (long long j=1 ; j < tam+1 ; j++){
            if(matriz[i][j] == 1){
                if(matriz[i+1][j] == 1 && matriz[i+1][j+1] == 1 && matriz[i][j+1] == 1) q = true ;
                if(matriz[i][j+1] == 1 && matriz[i-1][j+1] == 1 && matriz[i-1][j] == 1) q = true ; 
                if(matriz[i][j-1] == 1 && matriz[i-1][j-1] == 1 && matriz[i-1][j] == 1) q = true ; 
                if(matriz[i+1][j-1] == 1 && matriz[i+1][j] == 1 && matriz[i][j-1] == 1) q = true ; 
            }
        }
    }
    cout << ((q) ? "YES\n" : "NO\n");
    return 0;
}
