#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long num, total=1000000, benef=0;
    while(cin>>num){
        benef++;
        total-=num;
        if(total < 0) break;
    }

    cout << "Beneficiados: " << benef << '\n';
    if(total >= 0) cout << "Todos satisfeitos!\n";
    else cout << "Faltou: " << total*-1 << "ml para completar o último!\n";
}
