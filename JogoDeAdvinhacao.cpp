#include<iostream>
using namespace std;

int main(){
    cout<< "************************************" << endl;
    cout<< "* Bem-Vindos ao Jogo de Advinhacao *" << endl;
    cout<< "************************************" << endl;

    int numero_secreto = 42;
    cout<< "O numero secreto e "<<numero_secreto<<". Nao conte a ninguem."<<endl;

    int chute;
    cout<<"Qual e o seu chute? ";
    cin>> chute;

    cout<<"O valor do seu chute e:"<<chute<< endl;

    if(chute == numero_secreto){
        cout<<"Voce acertou o numero secreto"
    }
    else{
        cout<<"Voce errou, tente novamente. "
    }


}