#include <stdio.h>

int main(){

    int idade = 18;
    float altura = 1.75;

    // idade >= 18 => Falso
    // idade <= 30 => Verdadeiro
    // Falso && Verdadeiro
    // Falso && altura > 1.70
    // Falso && Verdadeira => Falso

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem a altura adequada.\n");
    } else {
        printf("Você não atende aos critérios.\n");
    }
}
