#include <bits/stdc++.h>
using namespace std;

int main(){
    int ins; cin >> ins;
    if(ins >= 5 && ins <= 30) cout << "Foi massa!\n";
    else if(ins > 30) cout << "Foi top demais!\n";
    else if(ins < 5) cout << "Flopou!\n";
    return 0;
}