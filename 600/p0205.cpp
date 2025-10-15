#include <bits/stdc++.h>
using namespace std;

int main(){
    string p; cin >> p;
    string p_inverso = p;
    reverse(p_inverso.begin(), p_inverso.end());
    int tam=p.size(), dif=0;
    for(int i=0 ; i<tam ; i++){
      if(p[i] != p_inverso[i]) dif+=1;
    }
    (dif == 2) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}