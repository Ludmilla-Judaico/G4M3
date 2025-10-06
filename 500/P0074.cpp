#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    bool resp = false;
    for(char &c : s) if(isdigit(c)){resp=true ; break;}
    (resp) ? cout << s << " " << "YES\n" : cout << s << " " << "NO\n";
    return 0;
}