#include <stdio.h>

int main(){

    int idade = 20;
    float altura = 1.75;

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem a altura adequada\n");
    } else {
        printf("Você não atende aos critérios\n");
    }
}
