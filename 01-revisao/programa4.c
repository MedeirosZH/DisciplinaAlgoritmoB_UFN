#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// fazer um programa que sorteie 10 numeros aleatórios entre 0 a 100
// armazenando-os em um vetor tamanho 10
// ao final exibir estes numeros

int main() {
    int vetor [TAM];

    srand (time (NULL));
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 100;
    
    }
    for (int i = 0; i < TAM; i++) {
        printf("%d\t", vetor[i]);

    }
    printf("\n");

    return 1;
}