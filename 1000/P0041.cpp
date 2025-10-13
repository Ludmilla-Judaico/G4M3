#include <bits/stdc++.h>
using namespace std;
//quadrado perfeito
int main(){
    int num, q=0; cin >> num;
    for(int i=0 ; i <= num/2 ; i++){
        if(i*i == num){
            q = i;
            break;
        }
    }
    if(q != 0 || num==1){
        cout << "SIM\n";
    }else{
        cout << "NAO\n";
    }
    return 0;
}