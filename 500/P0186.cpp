#include <bits/stdc++.h>
using namespace std;

int main(){
    string num; cin >> num;
    int tam = num.size()-1;
    (num[0] == num[tam]) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}