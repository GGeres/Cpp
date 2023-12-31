#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<< "************************************" << endl;
    cout<< "* Bem-Vindos ao Jogo de Advinhacao *" << endl;
    cout<< "************************************" << endl;

    cout<<"Escolha o nivel de dificuldade: "<< endl;
    cout<<"Facil (1), Medio (2) ou Dificil (3)"<< endl;

    char dificuldade;
    cin >> dificuldade;

    int n_tentativas;
    if(dificuldade == '1'){
        n_tentativas = 15;
    }
    else if (dificuldade == '2')
    {
        n_tentativas = 10;
    }
    else{
        n_tentativas = 5;
    }
    
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;
    
    for(tentativas = 1; tentativas <= n_tentativas;tentativas++){
        int chute;
        cout<<"Tentativa "<<tentativas<<endl;
        cout<<"Qual e o seu chute? ";
        cin>> chute;

        cout<<"O valor do seu chute e: "<<chute<< endl;

        double p_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - p_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
        cout<<"Parabens! Voce acertou o numero secreto"<<endl;
        nao_acertou = false;
        break;
        }
        else if(maior){
        cout<<"Seu chute foi maior que o numero secreto"<<endl;
        }else{
        cout<<"Seu chute foi menor que o numero secreto"<<endl;
        }
    }

    cout<<"Fim de Jogo!!"<<endl;
    if (nao_acertou){
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else {
        cout<<"Voce acertou o numero secreto em "<<tentativas<<" tentativas." <<endl;
        cout.precision(2);
        cout<< fixed;
        cout<<"Sua pontuação foi de "<< pontos <<" pontos."<<endl;
    }
}