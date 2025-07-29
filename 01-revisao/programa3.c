#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// código para calcular quanto que eu dormi conforme minha idade

int main() {
    int age;
    int sleepTime;

    printf("Digite sua idade: ");
    scanf("%d", &age);

    sleepTime = (int)(age/3);

    printf("Você já dormiu %d anos \n", sleepTime);

    return 1;
}