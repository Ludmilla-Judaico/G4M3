#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long linha, coluna; cin>>linha>>coluna;
    vector<string> rgb = {"0000FF", "00FF00", "FF0000", "FFFFFF"};
    vector<string> bordas, meio;
    bool rgbcheck = true;
    
    for(long long i=0 ; i<linha ; i++){
        for(long long j=0 ; j<coluna ; j++){
            string cor; cin >> cor;
            auto it = find(rgb.begin(), rgb.end(), cor);
            if(it == rgb.end()) rgbcheck = false;

            if(!rgbcheck) break;

            if((i == 0 || i == linha-1) || (j == 0 || j == coluna-1)){
                bordas.push_back(cor);
            }else{
                meio.push_back(cor);
            }


        }
        if(!rgbcheck) break;
    }

    if(!rgbcheck) cout << "N\n";

    else{
        bool bordascheck = true;
        bool meiocheck = true;
        string ini_borda = bordas[0];
        for(long long i=0 ; i<bordas.size() ; i++){
            if(bordas[i] != ini_borda){
                bordascheck = false;
                break;
            }

            auto it = find(meio.begin(), meio.end(), bordas[i]);
            if(it != meio.end()){
                meiocheck = false;
                break;
            }
        }

        if(bordascheck && meiocheck){
            cout << "S\n";
        }else{
            cout << "N\n";
        }
    }
    return 0;
}
