#include <stdio.h>

int main(){
char variavel;

printf("Digite um valor: \n");
scanf("%c", &variavel);

switch (variavel) {
    case 'a':
    // Código a ser executado se variavel == a
    printf("Código a ser executado se variável == a\n");
    printf("Teste do case 'a'\n");
    break;
    case 'b':
    // Código a ser executado se variavel == b
    printf("Código a ser executado se variavel == b\n");
    break;
    default:
    // Código a ser executado se nenhum dos casos acima for verdadeiro
    printf("Código a ser executado se variavel não for a ou b\n");

}
}
