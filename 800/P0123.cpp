#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n; cin>>n;
    long long a=0, b=0;
    bool va = false, vb = false;
    vector<char> letras = {'X', 'J', 'Q', 'K'};
    for(long long i=1 ; i<n+1 ; i++){
        char carta; cin>>carta;
        if(i%2 == 0){
            auto it = find(letras.begin(), letras.end(), carta);
            if(it != letras.end()){
                b += 10;
            }else if(carta == 'A'){
                b = 0;
            }else if(carta == 'C'){
                vb = true;
                break;
            }
            else{
                b += carta - '0';
            }
        } 
        else{
            auto it = find(letras.begin(), letras.end(), carta);
            if(it != letras.end()){
                a+=10;
            }else if(carta == 'A'){
                a = 0;
            }else if(carta == 'C'){
                va = true;
                break;
            }
            else{
                a+=carta - '0';
            }

        }
    }

    if(vb) cout << "BIANCA\n";
    else if(va) cout << "ANDRESSA\n";
    else if(a < b) cout << "BIANCA\n";
    else if (b < a) cout << "ANDRESSA\n";
    else cout << "EMPATE\n";
    
    return 0;
}
