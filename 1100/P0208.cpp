#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long mesada, taxa; cin>>mesada>>taxa;
    vector<char> msd(mesada, ' '); vector<char> tx(taxa, ' ');

    for(auto &m:msd) cin>>m;
    for(auto &t:tx) cin>>t;

    bool acabou = true;
    long cont = 0;
    while(acabou){
        for(long long i=0 ; i<taxa ; i++){
            auto it = find(msd.begin(), msd.end(), tx[i]);
            if(it != msd.end()){
                msd.erase(it);
                cont++;
            }else{
                acabou = false;
                break;
            }
        }
    }

    cout << cont/taxa << '\n';
    return 0;
}
