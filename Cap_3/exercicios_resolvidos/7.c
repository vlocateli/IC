//7)Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base
#include <stdio.h>
#define GRATIFICACAO (5.f/100.f)
#define IMPOSTO (10.f/100.f)
int main(void){
    float salario_min;
    printf("Calculo de salario_min\n");
    printf("Digite o salario_min \n");
    scanf("%f%*c",&salario_min);
    salario_min+=(salario_min*GRATIFICACAO)-(salario_min*IMPOSTO);
    printf("salario_min = %.2f",salario_min);
    return 0;

}