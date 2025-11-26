#include <bits/stdc++.h>
using namespace std;

// long long proxPrimo(vector<bool>, long long n){
  
//   return prox;
// }

int main() 
{
    //CRIVO----------------------------------------
    long long LIM = 4e6;
    vector<bool> is_prime(LIM + 1); for(long long n=2 ; n<=LIM ; n++) is_prime[n] = true;
    is_prime[0] = is_prime[1] = false;
    for(long long n=2 ; n*n<=LIM ; n++){
      if(!is_prime[n]) continue;
      for(long long m=n*n ; m<=LIM ; m+=n){
        is_prime[m] = false;
      }
    }
    
    vector<long long> primos;
    for(long long j=0 ; j<=LIM ; j++){
      if(is_prime[j]) primos.push_back(j);
    }
    
    //PRINCIPAL------------------------------------
    long long qnt, i; cin>>qnt;
    vector<pair<long long, long long>> fs(qnt);
    for(i=0 ; i<qnt ; i++){
      cin >> fs[i].first >> fs[i].second;
    }
    sort(fs.begin(), fs.end());
    vector<long long> x(qnt), y(qnt);
    for(i=0 ; i<qnt ; i++){
      x[i] = fs[i].first;
      y[i] = fs[i].second;
    }
    
    //CALCULANDO RETANGULOS
    long long minXEsq=x[0], maxXEsq=x[2], minYEsq=*min_element(y.begin(), y.begin()+2), maxYEsq=y[2];
    long long minXDir=x[qnt-3], maxXDir=x[qnt-1], minYDir=*min_element(y.begin()+(qnt-3), y.begin()+(qnt-1)), maxYDir=*max_element(y.begin()+(qnt-3), y.begin()+(qnt-1));
    long long lEsq, aEsq, lDir, aDir, pAtual=0, pMaior=0;
    
    for(i=2 ; i<=qnt-3 ; i++){
      maxXEsq = max(maxXEsq, x[i-1]); minXEsq = min(minXEsq, x[i-1]);
      maxYEsq = max(maxYEsq, y[i-1]); 
      
      maxXDir = max(maxXDir, x[i+1]); minXDir = min(minXDir, x[i+1]);
      maxYDir = max(maxYDir, y[i+1]); 
      
      lEsq = maxXEsq - minXEsq; aEsq = maxYEsq - minYEsq; 
      lDir = maxXDir - minXDir; aDir = maxYDir - minYDir;
      
      pAtual = (2*(lEsq+aEsq)) + (2*(lDir+aDir));
      pMaior = max(pAtual, pMaior);
    }
    
    cout << pMaior;
    
    return 0;
}
