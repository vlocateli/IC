//5)Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
#include <stdio.h>
int main(void){
    float salario_min,aumento;
    printf("Calculo de aumento de salario_min.\n");
    printf("Digite seu salario_min atual: \n");
    scanf("%f%*c",&salario_min);
    printf("Digite a %% de aumento \n");
    scanf("%f%*c",&aumento);
    salario_min+=(salario_min*aumento/100.f);
    printf("Seu salario_min eh de %.2f",salario_min);
    return 0;
}