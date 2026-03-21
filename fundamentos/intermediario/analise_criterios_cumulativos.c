#include <stdio.h>

int main() {

int idade, dependentes;
float renda;

// A primeira condição idade do usuário está entre 18 e 65 anos.
// A segunda condição se a renda do usuário é menor que 3000.
// A terceira condição verifica se o número de dependentes é maior que 2.

printf("Digite a sua idade: \n");
scanf("%d", &idade);
printf("Digite a sua renda mensal: \n");
scanf("%f", &renda);
printf("Digite o número de dependentes: \n");
scanf("%d", &dependentes);

if (idade >= 18 && idade < 65){
   
    if (renda < 3000){

       if (dependentes > 2) {
        printf("Você atende a todos os critérios!\n");
       
    } else {
        printf("Você não atende ao critério de dependentes!\n");
       }

    } else {
        printf("Você não atende ao critério da renda!\n");
    }     
} else {
    printf("Você não atende ao critério da idade!\n");
}

}
