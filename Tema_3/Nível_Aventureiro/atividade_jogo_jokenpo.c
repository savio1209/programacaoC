#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("Bem vindo ao Jogo de Jokenpô!\n");
    printf("Escolha uma opção abaixo:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

escolhaComputador = rand() % 3 + 1;

switch (escolhaJogador)
{
case 1:
    printf("Jogador: Pedra - ");
    break;
case 2:
    printf("Jogador: Papel - ");
    break;
case 3:
    printf("Jogador: Tesoura - ");
    break;
default:
    printf("Opção inválida.\n");
    break;
}

switch (escolhaComputador)
{
case 1:
    printf("Computador: Pedra\n");
    break;
case 2:
    printf("Computador: Papel\n");
    break;
case 3:
    printf("Computador: Tesoura\n");
    break;
}



    return 0;

}