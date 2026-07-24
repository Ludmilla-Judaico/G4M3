#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    string foto;
    long long posi=0, atq=0;
    while(cin>>foto){
        long long posiX = foto.find('X');
        if(posiX == std::string::npos){
            cout << "Vitória com " << atq << " melões!\n";
            break;
        }

        if(foto[posi] == 'O'){
            // cout << "escond vazio\n";
            if(posi == 0){
                if(foto[posi+1] == 'O'){
                    posi = posi+1;
                    cout << "Correndo pro esconderijo " << posi << "!\n";
                }else{
                    cout << "Tiro de Melão!!!\n";
                    atq++;
                }
            }else if(posi == foto.size()-1){
                if(foto[posi-1] == 'O'){
                    posi = posi-1;
                    cout << "Correndo pro esconderijo " << posi << "!\n";
                }else{
                    cout << "Tiro de Melão!!!\n";
                    atq++;
                }
            }else if(foto[posi-1] != 'O' && foto[posi+1] != 'O'){
                cout << "Tiro de Melão!!!\n";
                atq++;
            }else{
                if(foto[posi+1] == 'O' && foto[posi-1] != 'O'){
                    posi = posi+1;
                    cout << "Correndo pro esconderijo " << posi << "!\n";
                }
                else if(foto[posi-1] == 'O' && foto[posi+1] != 'O'){
                    posi = posi-1;
                    cout << "Correndo pro esconderijo " << posi << "!\n";
                }else{
                    cout << "Tiro de Melão!!!\n";
                    atq++;
                }
            }
        }else{
            cout << "Silêncio...\n";
        }
    }
    
    return 0;
}
