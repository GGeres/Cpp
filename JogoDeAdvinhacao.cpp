#include<iostream>
using namespace std;

int main(){
    cout<< "************************************" << endl;
    cout<< "* Bem-Vindos ao Jogo de Advinhação *" << endl;
    cout<< "************************************" << endl;

    int numero_secreto = 42;
    cout<< "O numero secreto é "<<numero_secreto<<". Não conte a ninguém."<<endl;

    int chute;
    cout<<"Qual é o seu chute? ";
    cin>> chute;

    cout<<"O valor do seu chute é:"<<chute<< endl;


}