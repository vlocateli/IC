//6)Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, 
//sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base. 
#include<stdio.h>
#define GRATIF (5.f/100.f)
#define IMPOSTO (7.f/100.f)
int main(void){
    float salario_min;
    printf("Calculo de salario_min\n");
    printf("Digite o salario_min \n");
    scanf("%f%*c",&salario_min);
    salario_min+=(salario_min*GRATIF)-(salario_min*IMPOSTO);
    printf("salario_min = %.2f",salario_min);
    return 0;
}