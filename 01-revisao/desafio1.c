#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main () {
    int vetor [TAM];
    srand(time(NULL));
    int number;
    int lastNumberPosition = 0;
    int inserted;

    for (int i = 0; i < TAM; i++) {
        number = rand() % 100;
        inserted = 0;
    }

    for (int j = 0; j <= lastNumberPosition; j++) {
        if (number == vetor[j]) {
            inserted = 1; // número já esta no vetor
            printf("Número repetido gerado...\n");

            break;
        }
    }
    if (inserted == 0){
        vetor
    }
    return 1;
}