#include <stdio.h>

int main() {

// Declaração das variáveis para a carta 1 
char estado1[100], codigo1[4], nome_cidade1[100];
int pontos_turisticos1;
unsigned long int populacao1;
float area1, pib1, densi_pop1, pibpc1, superpoder1;

superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pibpc1 + (1.0 /densi_pop1);

// Declaração das variáveis para a carta 2
char estado2[100], codigo2[4], nome_cidade2[100];
int pontos_turisticos2;
unsigned long int populacao2;
float area2, pib2, densi_pop2, pibpc2, superpoder2;

superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibpc2 + (1/densi_pop2);

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
  
// Exibição das cartas

printf("\n--- Dados da Primeira Carta ---\n");
printf("Código: %s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km2\n", area1);
printf("PIB: %.2f bilhões\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
printf("Densidade Populacional: %.2f\n", densi_pop1);
printf("PIB per capita: %.2f\n", pibpc1);
printf("Super Poder da primeira carta: %f\n", superpoder1);

printf("\n--- Dados da Segunda Carta ---\n");
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km2\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
printf("Densidade Populacional: %.2f\n", densi_pop2);
printf("PIB per capita: %.2f\n", pibpc2);
printf("Super Poder da primeira carta: %f\n", superpoder2);

// Comparação dos atributos das cartas

printf("\n***Comparação dos atributos das cartas***\n");
printf("\nLegenda: (1) verdadeiro e (2) falso\n");
printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
printf("Número de pontos turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
printf("Densidade populacional: Carta 1 venceu (%d)\n", densi_pop1 < densi_pop2);
printf("PIB per capita: Carta 1 venceu (%d)\n", pibpc1 > pibpc2);
printf("Super poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);


return 0;

}
