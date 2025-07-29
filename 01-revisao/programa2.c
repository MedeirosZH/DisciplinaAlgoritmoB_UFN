#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // semeadora

    int numberSorte = rand () % 100; // sorteando um numero entre 0 a 100
    printf("%d\n",numberSorte);

    return 1;
}