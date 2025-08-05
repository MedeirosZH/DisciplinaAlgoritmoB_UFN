#include <iostream>
#include <string>
#define TAM 5
 
using namespace std;
 
int main() {
    cout << "Coloque um Nome que sao strings\n\n";
    string aluno;
    string vetorAlunos[TAM];
 
    //rotina que o usuario digita TAM numeros inteiros
    for (int i = 0; i < TAM; i++) {
        cout << "Digite um Nome: ";
        getline (cin,aluno);
 
        // rotina se insere um nome, se o nome n for repetido

    vetorAlunos[i] = aluno;
    }
 
    //rotina que o programa exibe os numeros inteiros um depois do outro
    cout << "Aluno: ";
    for (int i = 0; i < TAM; i++) {
        cout << aluno[i] << "\t";
    }
    cout << "\n";
 
 
    return 1;
}