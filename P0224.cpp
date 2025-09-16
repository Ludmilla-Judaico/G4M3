#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    string nome1, nome2; cin >> nome1 >> nome2;
    int soma=0;
    map<char,int> freq;

    for(char elem : nome1){
        freq[elem]++;
    }

    for(char elem : nome2){
        if(freq[elem] > 0){
            freq[elem]--;
        }else if(freq[elem] == 0){
            soma++;
        }
    }

    cout << soma << '\n';
    return 0;
}