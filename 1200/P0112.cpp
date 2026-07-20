#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long linha, coluna; cin>>linha>>coluna;
    vector<long long> impares;
    long long zeros=0;
    bool par = false;
    for(long long i=0 ; i<linha ; i++){
        for(long long j=0 ; j<coluna ; j++){
            long long num; cin>> num;
            if(num != 0){
                if(num%2 != 0) impares.push_back(num);
                else par=true;
            }else{
                zeros++;
            }
        }
    }

    if(zeros == linha*coluna) cout << 0 << '\n';
    else if(impares.empty()) cout << 1 << '\n';
    else if(impares[0] == 1){
        long long uns=0;
        for(long long i=0 ; i<impares.size() ; i++){
            if(impares[i] == 1) uns++;
        }

        if(uns == impares.size() && !par) cout << 1 << '\n'; 
        else cout << 2 << '\n';
    }
    else cout << 2 << '\n';
    

    return 0;
}
