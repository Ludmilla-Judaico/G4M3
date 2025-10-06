#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0 ; i<t ; i++){
        string nome1, nome2; cin >> nome1>>nome2;
        int p1=0, p2=0, tam1=nome1.size(), tam2=nome2.size();
        for(int j=0 ; j<tam1 ; j++){
            if(nome1[j] == 'a') p1+=1;
            else if(nome1[j] == 'e') p1+=2;
            else if(nome1[j] == 'i') p1+=3;
            else if(nome1[j] == 'o') p1+=4;
            else if(nome1[j] == 'u') p1+=5;
            else if(nome1[j] == 'y') p1+=100;
        }

        for(int j=0 ; j<tam2 ; j++){
            if(nome2[j] == 'a') p2+=1;
            else if(nome2[j] == 'e') p2+=2;
            else if(nome2[j] == 'i') p2+=3;
            else if(nome2[j] == 'o') p2+=4;
            else if(nome2[j] == 'u') p2+=5;
            else if(nome2[j] == 'y') p2+=100;
        }
        if(p1 > p2) cout << nome1 << '\n';
        else if(p2 > p1) cout << nome2 << '\n';
        else if(p1 == p2) cout << "naruto\n";
    }
    return 0;
}