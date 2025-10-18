#include <stdio.h>

int main() {
    int opcao, agencia, conta;
    float saldo = 1000.00;
    char banco[20];

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("O seu saldo é: R$%.2f\n", saldo);
        break;

        case 2:
        printf("Digite o banco que você deseja depositar:\n");
        scanf(" %c", &banco);
        printf("Digite a agência que você deseja depositar:\n");
        scanf(" %d", &agencia);
        printf("Digite a conta que você deseja depositar:\n");
        scanf(" %d", &conta);
        break;

        case 3:
        printf("Digite o valor a sacar:\n");
        break;

        default:
        printf("Opção inválida!\n");
    }
}