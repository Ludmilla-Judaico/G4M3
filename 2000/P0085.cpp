#include <bits/stdc++.h>
using namespace std;

int main() 
//precisei usar __uint128_t por causa do compilador 32bits do OneCompiler
{
    unsigned long long h; cin >> h;
    __uint128_t pa2 = 5 + (__uint128_t)(h - 2) * 3;
    __uint128_t soma2 = (5 + pa2) * (h - 1) / 2;
    __uint128_t pa = 2 + soma2;
    
    cout << (unsigned long long)(pa % 7907) << '\n';
    return 0;
}
//caso de teste que percebi o erro:
//912897723484 = 1334
