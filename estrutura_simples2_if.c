#include <stdio.h>

int main (){

    int idade1, idade2;

    printf("Digite a idade da primeira pessoa:\n");
    scanf("%d", &idade1);
    printf("Digite a idade da segunda pessoa:\n");
    scanf("%d", &idade2);

    if (idade1 > idade2) {
        printf("primeira pessoa é a mais velha");
    }

}