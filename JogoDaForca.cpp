#include<iostream>
using namespace std;
const string P_SECRETA = "MELANCIA";

bool letra_existe (char chute){
    for (int i = 0; i < P_SECRETA.size(); i++){
        if(chute == P_SECRETA[i]){
            return true;
        }
    }
    return false;    
}

int main(){
    
    cout<< P_SECRETA << endl;

    bool nao_acerto = true;
    bool nao_enforcou = true;

    while(nao_acerto && nao_enforcou){
        char chute;
        cin >> chute;

        if(letra_existe(chute)){
            cout<<"Voce acertou!! Seu chute esta na palavra."<<endl;
        }
        else{
            cout<<"Voce errou. Seu chute nao esta na palavra."<< endl;
        }
    }
}