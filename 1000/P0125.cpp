#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long p; cin >> p;

    vector<long long> partic(p);
    vector<long long> qntd(p);

    bool errado = false;

    for(auto &part:partic){
        cin >> part;
    }

    for(long long i=0 ; i<p ; i++){
        if(partic[i] == i+1){
            errado = true;
            break;
        }

        qntd[partic[i]-1]++;
    }

    for(auto q:qntd){   
        if(q > 1 || q == 0) errado = true;
    }

    if(errado){
        cout << "N\n";
    }else{
        cout << "S\n";
    }
    return 0;
}
