#include<iostream>
using namespace std;

int main(){
    cout<< "************************************" << endl;
    cout<< "* Bem-Vindos ao Jogo de Advinhacao *" << endl;
    cout<< "************************************" << endl;

    const int NUMERO_SECRETO = 42;
    bool nao_acertou = true;
    int tentativas = 0;
    
    while(nao_acertou){
        tentativas++;
        int chute;
        cout<<"Tentativa "<<tentativas<<endl;
        cout<<"Qual e o seu chute? ";
        cin>> chute;

        cout<<"O valor do seu chute e: "<<chute<< endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
        cout<<"Voce acertou o numero secreto"<<endl;
        nao_acertou = false;
        }
        else if(maior){
        cout<<"Seu chute foi maior que o numero secreto"<<endl;
        }else{
        cout<<"Seu chute foi menor que o numero secreto"<<endl;
        }
    }

    cout<<"Fim de Jogo!!"<<endl;
    cout<<"Voce acertou o numero secreto em "<<tentativas<<" tentativas."<<endl;
        
    


}