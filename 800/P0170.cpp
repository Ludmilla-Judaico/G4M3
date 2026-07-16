#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long qntd; cin >> qntd;
    string num, alice="", buba="";
    cin>>num;
    for(long long i=1 ; i<qntd+1 ; i++){
        if(i%2 == 0){
            alice+=num[i-1];
            buba+="0";
        }else{
            buba+=num[i-1];
            alice+="0";
        }
    }

    cout << alice << '\n';
    cout << buba << '\n';
    return 0;
}
