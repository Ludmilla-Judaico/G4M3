#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; getline(cin, n);
    int nivel=0;
    for(char l : n){
        if(l != ' '){
            if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u' || l=='A' || l=='E' || l=='I' || l=='O' || l=='u') nivel+=2;
            else nivel+=1;
        }
    }
    cout << nivel << '\n';
    return 0;
}