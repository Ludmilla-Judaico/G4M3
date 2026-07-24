#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    string tipo;
    map<string, long long> tipos;
    while(cin>>tipo){
        if(tipo == "FIM") break;

        tipos[tipo]++;
        cout << tipo << " " << tipos[tipo] << '\n';
    }

    return 0;
}
