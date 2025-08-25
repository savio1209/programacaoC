#include <stdio.h>

int main() {

// Declaração das variáveis para a carta 1
char estado1, codigo1[4], nome_cidade1[100];
int populacao1, pontos_turisticos1;
float area1, pib1;

// Declaração das variáveis para a carta 2
char estado2, codigo2[4], nome_cidade2[100];
int populacao2, pontos_turisticos2;
float area2, pib2;

// Informações para a Carta 1

printf("Cadastro da primeira carta:\n");
printf("Informe o código da cidade (ex.: A01): ");
scanf("%s", &codigo1);
printf("População: ");
scanf("%d", &populacao1);
printf("Área (em km2): ");
scanf("%f", &area1);
printf("PIB (em bilhões): ");
scanf("%f", &pib1);
printf("Número de pontos turísticos: ");
scanf("%d", &pontos_turisticos1);

// Informações para a Carta 2

printf("Cadastro da segunda carta:\n");
printf("Informe o código da cidade (ex.: B02): ");
scanf("%s", &codigo2);
printf("População: ");
scanf("%d", &populacao2);
printf("Área (em km2): ");
scanf("%f", &area2);
printf("PIB (em bilhões): ");
scanf("%f", &pib2);
printf("Número de pontos turísticos: ");
scanf("%d", &pontos_turisticos2);

// Exibição das cartas

printf("\n--- Dados da Primeira Carta ---\n");
printf("Código: %s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km2\n", area1);
printf("PIB: %.2f bilhões\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

printf("\n--- Dados da Segunda Carta ---\n");
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km2\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

return 0;

}