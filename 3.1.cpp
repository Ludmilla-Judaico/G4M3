#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    long long qntd; cin>>qntd;
    vector<long long> prio(qntd, 0); for(long long &p:prio) cin>>p;
    sort(prio.begin(), prio.end());
    for(long long p:prio) cout << p << '\n';
    
    return 0;
}
