#include<iostream>
using namespace std;

int main(){
    cout<< "************************************" << endl;
    cout<< "* Bem-Vindos ao Jogo de Advinhacao *" << endl;
    cout<< "************************************" << endl;

    int numero_secreto = 42;
    
    int chute;
    cout<<"Qual e o seu chute? ";
    cin>> chute;

    cout<<"O valor do seu chute e:"<<chute<< endl;

    bool acertou = chute == numero_secreto;
    bool maior = chute > numero_secreto;

    if(acertou){
        cout<<"Voce acertou o numero secreto"<<endl;
    }
    else if(maior){
        cout<<"Seu chute foi maior que o numero secreto"<<endl;
    }else{
        cout<<"Seu chute foi menor que o numero secreto"<<endl;
    }

        
    


}