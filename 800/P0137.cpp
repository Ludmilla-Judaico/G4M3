#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long qntd; cin >> qntd;
    double soma = 0;
    for(long long i=0 ; i<qntd ; i++){
        double n1, n2; cin>>n1>>n2;
        double result = n1*n2;
        soma+=result;
    }

    cout << soma << '\n';
    return 0;
}
