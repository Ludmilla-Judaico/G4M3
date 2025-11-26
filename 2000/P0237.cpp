#include <bits/stdc++.h>
using namespace std;

int main() 
{
    //CRIVO----------------------------------------
    long long LIM = 4e6;
    vector<bool> is_prime(LIM + 1, true);
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
    long long minXEsq=x[0], maxXEsq=x[1], minYEsq=min(y[0], y[1]), maxYEsq=max(y[0], y[1]);
    long long minXDir=x[3], maxXDir=x[qnt-1], minYDir=min(y[3], y[4]), maxYDir=max(y[3], y[4]);
    long long lEsq, aEsq, lDir, aDir, pAtual=0;
    
    long long pMelhor = LLONG_MAX;
    
    for(i=2 ; i<=qnt-3 ; i++){
      maxXEsq = max(maxXEsq, x[i-1]);
      minXEsq = min(minXEsq, x[i-1]);
      maxYEsq = max(maxYEsq, y[i-1]);
      minYEsq = min(minYEsq, y[i-1]);

      maxXDir = max(maxXDir, x[i+1]);
      minXDir = min(minXDir, x[i+1]);
      maxYDir = max(maxYDir, y[i+1]);
      minYDir = min(minYDir, y[i+1]); 
      
      lEsq = maxXEsq - minXEsq; aEsq = maxYEsq - minYEsq; 
      lDir = maxXDir - minXDir; aDir = maxYDir - minYDir;
      
      if(!is_prime[lEsq]) lEsq = *upper_bound(primos.begin(), primos.end(), lEsq);
      if(!is_prime[aEsq]) aEsq = *upper_bound(primos.begin(), primos.end(), aEsq);
      if(!is_prime[lDir]) lDir = *upper_bound(primos.begin(), primos.end(), lDir);
      if(!is_prime[aDir]) aDir = *upper_bound(primos.begin(), primos.end(), aDir);
      
      cout << lEsq << " " << aEsq << " " << lDir << " " << aDir << '\n';
      
      pAtual = (2*(lEsq+aEsq)) + (2*(lDir+aDir));
      cout <<  (2*(lEsq+aEsq)) << " " <<  (2*(lDir+aDir)) << '\n';
      pMelhor = min(pAtual, pMelhor);
    }
    
    cout << pMelhor;
    
    return 0;
}
