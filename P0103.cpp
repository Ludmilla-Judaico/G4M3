#include <bits/stdc++.h>
using namespace std;

int main(){
    int testes; cin >> testes;
    for(int i=0; i<testes ; i++){
        int dias_cat, dias_solu, custo_dia; cin >> dias_cat >> dias_solu >> custo_dia;
        
        vector<int> G;
        for(int j=1 ; j<=dias_solu ; j++){
            int novo_g = ceil((double)j + (double)dias_solu/(j+1));
            G.push_back(novo_g);
        }
        int mid1, mid2, ini=0, fim=G.size()-1; //min_p=0;

        while(fim - ini > 2){
            mid1 = ini + (fim-ini)/3;
            mid2 = fim - (fim-ini)/3;
            if(G[mid1] == G[mid2]){

                fim = mid2-1;
                // if(G[mid1] < G[min_p]) min_p=mid1;
                
            }else if(G[mid1] < G[mid2]){
                fim = mid2-1;
                // if(G[mid1] < G[min_p]) min_p=mid1;

            }else{
                ini = mid1+1;
                // if(G[mid2] < G[min_p]) min_p=mid2;
            }
        }

        int min_p = ini;
        for(int i = ini; i <= fim; i++){
            if(G[i] < G[min_p]) min_p = i;
}
        
        if(G[min_p] <= dias_cat){
            cout << "WE CAN SAVE THE WORLD\n";
        }else{
            cout << "WE ARE DOOMED\n";
        }
        cout << (min_p+1)*custo_dia << '\n';
    }
    return 0;
}