#include <stdio.h>

int main() {

  char produtoA[30] = "Produto A";
  char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

int resultadoA, resultadoB;

printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

return 0;

}

