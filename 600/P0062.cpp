#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    bool resp=false;
    for(int i=0 ; i<n ; i++){
        string s ; cin >> s;
        for(char c : s) if(c == 'B') {resp=true ; break;}
        if(resp) break;
    }
    (resp) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}