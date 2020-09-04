/*
 Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. 
 Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espetáculo seja alcançado. 
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    float custo,qtd_ingresso,preco;
    printf("Calculo de qtd de ingressos.\n");
    printf("Digite o custo do espetaculo\n");
    scanf("%f%*c",&custo);
    printf("Digite o preco do ingresso: \n");
    scanf("%f%*c",&preco);
    qtd_ingresso=custo/preco;
    qtd_ingresso=ceil(qtd_ingresso); // nao se pode vender 1.5 ingressos por exemplo && nao se pode arredondar para baixo o numero de ingressos, pois n teriamos como pagar o espetaculo
    printf("Vc precisa vender %.2f ingressos",qtd_ingresso);
    return 0;
}