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

    if(chute == numero_secreto){
        cout<<"Voce acertou o numero secreto"<<endl;
    }
    else if(chute > numero_secreto){
        cout<<"Seu chute foi maior que o numero secreto"<<endl;
    }else{
        cout<<"Seu chute foi menor que o numero secreto"<<endl;
    }

        
    


}