#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll t; cin>>t;
    while(t--){
        ll tam; cin>>tam;
        string palavra; cin>>palavra;
        char proc='y';
        ll r=0, sim=0;
        while(r<tam){
            if(proc == 'y'){
                if(palavra[r] != proc) r+=1;
                else proc='e';

            }else if(proc == 'e'){
                if(palavra[r] != proc) r+=1;
                else proc='s';

            }else if(proc == 's'){
                if(palavra[r] != proc){
                    r += 1;
                }else{
                    sim += 1;
                    proc = 'y';
                }
            }
        }
        cout << sim << '\n';
    }
    return 0;
}
