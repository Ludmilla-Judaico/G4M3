#include <bits/stdc++.h>
using namespace std;

int main(){
    string ip; cin >> ip;
    int tam = ip.size();
    vector<string> num;
    string parte="";
    for(int i=0 ; i<tam ; i++){
        if(ip[i] != '.'){
            parte+=ip[i];
        }else{
            num.push_back(parte);
            parte = "";
        }
        if(i == tam-1){
            num.push_back(parte);
        }

    }
    int soma=0;
    for(string n : num) soma+= stoi(n);
    (soma % 8 == 0) ? cout << "BLOCK\n" : cout << "PASS\n";
    return 0;
}