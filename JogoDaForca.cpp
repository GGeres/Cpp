#include<iostream>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
 string p_secreta = "MELANCIA";
map<char, bool> chutou;
vector <char> chutes_errados;

bool letra_existe (char chute){
    for (char letra : p_secreta){
        if(chute == letra){
            return true;
        }
    }
    return false;    
}

bool nao_acertou(){
    for(char letra : p_secreta){
        if (!chutou[letra]) {
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}    

void imprime_cabecalho(){
    cout<<"***************************************"<< endl;
    cout<<"******        Jogo da Forca       *****"<< endl;
    cout<<"***************************************"<< endl;
    cout<<endl;
    }

vector <string> le_arquivo(){
    ifstream arquivo;
    arquivo.open("palavra.txt");

    int q_palavras;
    arquivo >> q_palavras;

        cout << "O arquivo possui "<< q_palavras <<" palavras."<<endl;

        vector<string> p_do_Arquivo;

        for (int i = 0; i < q_palavras; i++)
        {
            string p_lida;
            arquivo >> p_lida;
            cout << "Na linha "<< i <<": "<< p_lida << endl;
            p_do_Arquivo.push_back(p_lida);
        }
        return p_do_Arquivo;
        
}

void imprime_erros(){
    cout << "Chutes errados: ";
    for(char letra: chutes_errados){
        cout << letra << " ";
    }
    cout << endl;
}

void imprime_palavra(){
        for (char letra : p_secreta){
            if(chutou[letra])
            {
                cout<< letra<<" ";
            }
            else{
                cout<<"_ ";
            }
        }
        cout<<endl;
}

void chuta(){
    char chute;
        cin >> chute;

        chutou[chute] = true;

        if(letra_existe(chute)){
            cout<<"Voce acertou!! Seu chute esta na palavra."<<endl;
        }
        else{
            cout<<"Voce errou. Seu chute nao esta na palavra."<< endl;
            chutes_errados.push_back(chute);
        }
        cout<<endl;
}

void sorteia_palavra(){
    vector <string> palavras = le_arquivo();

    srand(time(NULL));
    int ind_sorteado = rand() % palavras.size();

    p_secreta = palavras[ind_sorteado];

}

int main(){
    imprime_cabecalho();

    le_arquivo();

    while(nao_acertou() && nao_enforcou()){
        imprime_erros();
        imprime_palavra();
        chuta();        
    }
    
    cout<<"Fim de Jogo!!"<< endl;
    cout<<"A palavra era: "<< p_secreta <<endl;
    if (nao_acertou()){
        cout<<"Voce perdeu. Tente novamente."<<endl;
    }
    else{
        cout<<"Parabens!! Voce acertou a palavra secreta."<<endl;
    }
    
}