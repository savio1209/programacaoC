#include <stdio.h>
// Duas novas bibliotecas.
#include <stdlib.h>
#include <time.h>

// Declaração da variável opcao.
int main() {
int opcao;
int numerosecreto, palpite;

// Menu interativo com 3 opções.
printf("Menu Principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

// Estrutura switch.
switch (opcao)
{
case 1:
    srand(time(0));
    numerosecreto = rand() % 10;
    printf("Digite um número de 0 a 9: ");
    scanf("%d", &palpite);
    if (numerosecreto == palpite)
    {
        printf("Você adivinhou!\n");
    } else {
        printf("errou!\n");
    }
    printf("Número secreto %d\n", numerosecreto);
    break;

case 2:
    printf("As regras são: \n");
    break;

case 3:
    printf("Saindo do jogo...\n");
    break;

default:
    printf("Opção inválida.\n");
    break;
}


}