#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    bool resp=false;
    for(char c : s) if(c == 'B'){resp=true ; break;}
    (resp) ? cout << "Borboletas Sempre Voltam\n" : cout << "Nem Sempre\n";
    return 0;
}