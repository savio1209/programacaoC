#include <stdio.h>

int main() {

// Declaração das variáveis para a carta 1 
char estado1[100], codigo1[4], nome_cidade1[100];
int pontos_turisticos1, escolha;
unsigned long int populacao1;
float area1, pib1, densi_pop1, pibpc1, superpoder1;

// Declaração das variáveis para a carta 2
char estado2[100], codigo2[4], nome_cidade2[100];
int pontos_turisticos2;
unsigned long int populacao2;
float area2, pib2, densi_pop2, pibpc2, superpoder2;

// Informações para a Carta 1

printf("Cadastro da primeira carta:\n");
printf("Informe o nome do estado: \n");
scanf("%s", estado1);
printf("Informe o código da cidade (ex.: A01): \n");
scanf("%3s", codigo1);
printf("Nome da cidade: \n");
scanf("%s", nome_cidade1);
printf("População: \n");
scanf("%lu", &populacao1);
printf("Área (em km2): \n");
scanf("%f", &area1);
printf("PIB (em bilhões): \n");
scanf("%f", &pib1);
printf("Número de pontos turísticos: \n");
scanf("%d", &pontos_turisticos1);

// Cálculo da densidade populacional e PIB per capita da primeira carta
densi_pop1 = (float) populacao1 / area1;
pibpc1 = pib1 / populacao1;

// Cálculo dos atributos que juntos formam o Super Poder da primeira carta
superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pibpc1 + (1.0 /densi_pop1);

// Informações para a Carta 2

printf("Cadastro da segunda carta:\n");
printf("Informe o nome do estado: \n");
scanf("%s", estado2);
printf("Informe o código da cidade (ex.: B02): \n");
scanf("%3s", codigo2);
printf("Nome da cidade: \n");
scanf("%s", nome_cidade2);
printf("População: \n");
scanf("%lu", &populacao2);
printf("Área (em km2): \n");
scanf("%f", &area2);
printf("PIB (em bilhões): \n");
scanf("%f", &pib2);
printf("Número de pontos turísticos: \n");
scanf("%d", &pontos_turisticos2);

// Cálculo da densidade populacional e PIB per capita da segunda carta  

densi_pop2 = (float) populacao2 / area2;
pibpc2 = pib2 / populacao2;

// Cálculo dos atributos que juntos formam o Super Poder da segunda carta
superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibpc2 + (1.0 /densi_pop2);
  
// Exibição dos dados da carta 1

printf("\n--- Dados da Primeira Carta ---\n");
printf("Código: %s\n", codigo1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km2\n", area1);
printf("PIB: %.2f bilhões\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
printf("Densidade Populacional: %.2f\n", densi_pop1);
printf("PIB per capita: %.2f\n", pibpc1);
printf("Super Poder da primeira carta: %f\n", superpoder1);

// Exibição dos dados da carta 2

printf("\n--- Dados da Segunda Carta ---\n");
printf("Código: %s\n", codigo2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km2\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
printf("Densidade Populacional: %.2f\n", densi_pop2);
printf("PIB per capita: %.2f\n", pibpc2);
printf("Super Poder da segunda carta: %f\n", superpoder2);

// Menu interativo usando Switch

printf("\n=== MENU DE COMPARAÇÃO ===\n");
printf("Escolha o atributo para comparar:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
scanf("%d", &escolha);

// Comparação dos atributos mesclando estrutura switch e if/else

switch (escolha) {
    case 1:
        printf("\nComparando População:\n");
        printf("%s: %lu habitantes\n", nome_cidade1, populacao1);
        printf("%s: %lu habitantes\n", nome_cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("%s venceu!\n", nome_cidade1);
        else if (populacao2 > populacao1)
            printf("%s venceu!\n", nome_cidade2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("\nComparando Área:\n");
        printf("%s: %.2f km²\n", nome_cidade1, area1);
        printf("%s: %.2f km²\n", nome_cidade2, area2);
        if (area1 > area2)
            printf("%s venceu!\n", nome_cidade1);
        else if (area2 > area1)
            printf("%s venceu!\n", nome_cidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("\nComparando PIB:\n");
        printf("%s: %.2f bilhões\n", nome_cidade1, pib1);
        printf("%s: %.2f bilhões\n", nome_cidade2, pib2);
        if (pib1 > pib2)
            printf("%s venceu!\n", nome_cidade1);
        else if (pib2 > pib1)
            printf("%s venceu!\n", nome_cidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("\nComparando Pontos Turísticos:\n");
        printf("%s: %d pontos\n", nome_cidade1, pontos_turisticos1);
        printf("%s: %d pontos\n", nome_cidade2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
            printf("%s venceu!\n", nome_cidade1);
        else if (pontos_turisticos2 > pontos_turisticos1)
            printf("%s venceu!\n", nome_cidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("\nComparando Densidade Demográfica:\n");
        printf("%s: %.2f hab/km²\n", nome_cidade1, densi_pop1);
        printf("%s: %.2f hab/km²\n", nome_cidade2, densi_pop2);
        if (densi_pop1 < densi_pop2)
            printf("%s venceu (menor densidade)!\n", nome_cidade1);
        else if (densi_pop2 < densi_pop1)
            printf("%s venceu (menor densidade)!\n", nome_cidade2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
}

return 0;

}
