#include<iostream>
#include <map>
using namespace std;
const string P_SECRETA = "MELANCIA";
map<char, bool> chutou;

bool letra_existe (char chute){
    for (char letra : P_SECRETA){
        if(chute == letra){
            return true;
        }
    }
    return false;    
}

int main(){
    
    bool nao_acerto = true;
    bool nao_enforcou = true;

    while(nao_acerto && nao_enforcou){
        for (char letra : P_SECRETA){
            if(chutou[letra]){
                cout<< letra<<" ";
            }
            else{
                cout<<"_ ";
            }
        }
        cout<<endl;

        char chute;
        cin >> chute;

        chutou[chute] = true;

        if(letra_existe(chute)){
            cout<<"Voce acertou!! Seu chute esta na palavra."<<endl;
        }
        else{
            cout<<"Voce errou. Seu chute nao esta na palavra."<< endl;
        }
    }
}