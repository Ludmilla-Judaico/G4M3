#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long larg, compr, moedas;
    cin >> larg>>compr>>moedas;
    long long menor = 0, maior = 0, resp=0;
    
    maior = max(larg, compr);
    menor = min(larg, compr);
    if(maior != menor){
      long long dif = maior-menor;
      moedas -= dif; menor += dif;
    }
    
    if(moedas%2 != 0){
      maior += (moedas/2) + 1;
      menor += moedas/2;
      resp = maior*menor;
    }else{
      maior += (moedas/2);
      menor += moedas/2;
      resp = maior*menor;
    }
    
    cout << resp << '\n';
    return 0;
}
