//8)Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
#include <stdio.h>
int main(void){
    float deposito,taxa,rendimento,total;
    printf("Calculo de rendimento com juros\n");
    printf("Digite o valor do deposito \n");
    scanf("%f%*c",&deposito);
    printf("Digite a taxa de juros: \n");
    scanf("%f%*c",&taxa);
    rendimento=deposito*taxa/100.f;
    total=deposito+rendimento;
    printf("Redimento = %.2f\n",rendimento);
    printf("Total = %.2f\n",total);
    return 0;
}