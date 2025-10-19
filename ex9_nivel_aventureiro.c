#include <stdio.h>

// Declaração da variável opcao.
int main() {
int opcao;

// Menu interativo com 3 opções.
printf("Menu Principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

// Estrutura switch
switch (opcao)
{
case 1:
    printf("Execução do Jogo\n");
    break;

case 2:
    printf("As regras são: \n");
    break;

case 3:
    printf("Saindo do jogo...\n");
    break;

default:
    printf("Opção inválida.\n")
    break;
}


}