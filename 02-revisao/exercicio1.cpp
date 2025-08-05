#include <iostream>
#include <string>
#define TAM 4

using namespace std;

// criando uma estrutura(tipo) artificial
typedef struct {
    string placa;
    string horaEnt;
    string horaSai;
    float valor;
} Carro;

int main () {
    Carro garagem[TAM];
    Carro carro;

    for (int i = 0; i < TAM; i++) {
        do {
            cout << "Placa: ";
            cin >> carro.placa;
            if (carro.placa.size() == 7) {
                break;
            } else {
                cout << "Placa invalida. Digite novamente . . . \n";
            }
        } while (true);
        cout << "Hora de entrada: ";
        cin >> carro.horaEnt;
        
        garagem[i] = carro;

    }
    cout << "Carros da garagem\n";

    for (int i = 0; i < TAM; i++) {
        cout << "Placa: " << garagem[i].placa << ". Hora de entrada: " << garagem[i].horaEnt << "\n";


    }
    return 1;
}
