#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long maior;
    vector<long long> x;
    vector<long long> y;

    for(long long i=1 ; i<9 ; i++){
        long long n; cin >> n;
        if(i%2 == 0){
            y.push_back(n);
        }else{
            x.push_back(n);
        }
    }

    auto it_maiorx = max_element(x.begin(), x.end());
    auto it_menorx = min_element(x.begin(), x.end());

    auto it_maiory = max_element(y.begin(), y.end());
    auto it_menory = min_element(y.begin(), y.end());

    long long distx = *it_maiorx - *it_menorx;
    long long disty = *it_maiory - *it_menory;

    cout << distx*disty << '\n';

    return 0;
}
