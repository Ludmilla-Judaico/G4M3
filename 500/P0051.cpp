#include <bits/stdc++.h>
using namespace std;

int main(){
    float n1, n2, n3, n4, n5;
    int total=0;
    for(int i=0 ; i<100 ; i++){
        cin >> n1>>n2>>n3>>n4>>n5;
        if((n1+n2+n3+n4+n5)/5 >= 700) total+=1;
    }
    cout << total << '\n';
    return 0;
}