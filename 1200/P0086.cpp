#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long h; cin >> h;
    long long t=0;
    for(long long i=h ; i>0 ; i--) t = t +  (3 * (i-1)) + 2;
    cout << t << '\n';
    return 0;
}
