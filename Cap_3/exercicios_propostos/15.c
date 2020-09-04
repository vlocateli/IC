/*
João recebeu seu salário e precisa pagar duas contas atrasadas. 
Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. 
Faça um programa que calcule e mostre quanto restará do salário de João.
*/
#include <stdio.h>
#define MULTA (4.00f/100.00f)
int main (void)
{
    float salario,conta1,conta2;
    printf("Digite seu salario: \n");
    scanf("%f%*c",&salario);
    printf("%.2f\n",salario);
    printf("Digite a conta 1: \n");
    scanf("%f%*c",&conta1);
    printf("Digite a conta 2: \n");
    scanf("%f%*c",&conta2);
    conta1+=(conta1*MULTA);
    conta2+=(conta2*MULTA);
    printf("conta 1 %.2f\n",conta1);
    printf("conta 2 %.2f\n",conta2);
    salario=salario-(conta1+conta2);
    printf("Resta do seu salario:R$ %.2f",salario);
    return 0;
}