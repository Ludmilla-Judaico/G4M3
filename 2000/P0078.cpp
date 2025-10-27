#include <bits/stdc++.h>
using namespace std;

//Complexidade : O(n^2)
int main() 
{
    int tam, num; cin >> tam >> num;
    vector<vector<bool>> area(tam, vector<bool>(tam, false));
    int cont=0;
    
    while(num--){
      int x, y, r; cin >>x>>y>>r;
      for(int i=0 ; i<tam ; i++){
        for(int j=0 ; j<tam ; j++){
          if((i - x)*(i - x) + ((j - y)*(j - y)) <= r*r){
            area[i][j] = true;
          }
        }
      }
    }
    
    for(int i=0 ; i<tam ; i++){
      for(int j=0 ; j<tam ; j++){
        if(!area[i][j]) cont+=1; 
      }
    }
    
    cout << cont << '\n';
    return 0;
}