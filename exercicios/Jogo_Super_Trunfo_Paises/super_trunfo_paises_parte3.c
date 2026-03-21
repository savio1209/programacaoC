#include <stdio.h>

int main() {

    // Declaração das variáveis para a carta 1 
    char estado1[100], codigo1[4], nome_cidade1[100];
    int pontos_turisticos1;
    unsigned long int populacao1;
    float area1, pib1, densi_pop1, pibpc1;

    // Declaração das variáveis para a carta 2
    char estado2[100], codigo2[4], nome_cidade2[100];
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2, densi_pop2, pibpc2;

    int escolha1, escolha2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // ================= CADASTRO DAS CARTAS =================
    printf("Cadastro da primeira carta:\n");
    printf("Informe o nome do estado: ");
    scanf("%s", estado1);
    printf("Informe o código da cidade (ex.: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densi_pop1 = (float) populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    printf("\nCadastro da segunda carta:\n");
    printf("Informe o nome do estado: ");
    scanf("%s", estado2);
    printf("Informe o código da cidade (ex.: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densi_pop2 = (float) populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    // ================= ESCOLHA DOS ATRIBUTOS =================
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &escolha1);

    // Menu dinâmico: o atributo escolhido não aparece novamente
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == escolha1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
    scanf("%d", &escolha2);

    // ================= OBTENDO OS VALORES DOS ATRIBUTOS =================
    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 5: valor1_carta1 = densi_pop1; valor1_carta2 = densi_pop2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
        case 5: valor2_carta1 = densi_pop1; valor2_carta2 = densi_pop2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ================= AVALIAÇÃO FINAL =================
    // Aplicando a regra especial para densidade demográfica (quanto menor, melhor)
    float soma1 = ((escolha1 == 5) ? (1 / valor1_carta1) : valor1_carta1) +
                  ((escolha2 == 5) ? (1 / valor2_carta1) : valor2_carta1);

    float soma2 = ((escolha1 == 5) ? (1 / valor1_carta2) : valor1_carta2) +
                  ((escolha2 == 5) ? (1 / valor2_carta2) : valor2_carta2);

    printf("\n=== RESULTADOS DA COMPARAÇÃO ===\n");
    printf("Atributos escolhidos: %d e %d\n", escolha1, escolha2);
    printf("%s: Soma total = %.2f\n", nome_cidade1, soma1);
    printf("%s: Soma total = %.2f\n", nome_cidade2, soma2);

    // Determina o vencedor usando operador ternário
    (soma1 > soma2) ? printf("\n🏆 %s venceu a rodada!\n", nome_cidade1)
    : (soma2 > soma1) ? printf("\n🏆 %s venceu a rodada!\n", nome_cidade2)
    : printf("\n🤝 Empate!\n");

    return 0;
}

