/*
 Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. 
 Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. calcule e mostre:
  a) o valor de cada quilowatt; 
  b) o valor a ser pago por essa residência; 
  c) o valor a ser pago com desconto de 15%. 
*/
#include <stdio.h>
int main()
{   
    float salario_min,qtd_kw,valor_kw,valor_casa,valor_desc;
    printf("Calculo do custo de quilowatt (Kw)\n");
    printf("Digite o valor do salario minimo \n");
    scanf("%f%*c",&salario_min);
    printf("Digite a qtd de Kw\n");
    scanf("%f%*c",&qtd_kw);
    valor_kw=salario_min/5;
    valor_casa=valor_kw*qtd_kw;
    valor_desc=valor_casa-(valor_casa*0.15);
    printf("Valor de cada Kw: R$ %.2f\n",valor_kw);
    printf("Valor a ser pago: R$ %.2f\n",valor_casa);
    printf("Valor com desconto:R$ %.2f\n",valor_desc);
    return  0;
}