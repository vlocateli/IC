/*
12)Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha. 
*/
#include <stdio.h>
int main (void)
{
    float sal_min,sal_func;
    printf("Digite o salario minimo atual: \n");
    scanf("%f%*c",&sal_min);
    printf("Digite o seu salario atual: \n");
    scanf("%f%*c",&sal_func);
    printf("Seu salario equivale a : %.2f salario(s) minimo(s)",sal_func/sal_min);
    return 0;
}