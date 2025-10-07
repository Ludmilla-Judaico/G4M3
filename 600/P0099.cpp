#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string texto="";
    cin.ignore();
    while(n--){
        string t; getline(cin, t);
        texto+=t;
    }
    for(char &c : texto){
        if(c >= 'A' && c <= 'Z'){
            c = tolower(c);
        }
    }

    string resp="";
    for(char i='a' ; i<='z' ; i++){
        size_t p = texto.find(i);
        if(p == string::npos) resp += i;
    }
    cout << resp << '\n';
    return 0;
}