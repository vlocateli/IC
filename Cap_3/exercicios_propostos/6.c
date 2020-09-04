/*
6)Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final. 
*/
#include <stdio.h>
int main(void)
{   int vendas;
    float salario;
    printf("Digite seu salario: \n");
    scanf("%f%*c",&salario);
    printf("digite suas vendas: \n");
    scanf("%d%*c",&vendas);
    salario+=(vendas*0.04);
    printf("%.2f",salario);
    return 0;
}