#include <stdio.h>
#define ACRES_1 (20.0f/100.0f)
#define ACRES_2 (10.0f/100.0f)
/*
Faça um algoritmo para calcular o novo salário de um funcionário.
Sabe-se que os funcionários que recebem atualmente salário de até R$ 500 terão aumento de 20%; os demais terão aumento de 10%. 
*/
int main(void)
{
    float salario,salario_atualizado;
    printf("Digite seu salario: \n");
    scanf("%f%*c",&salario);
    printf("Salario atual: %.2f\n",salario);
    if (salario<=500)
    {
        salario_atualizado=salario+(ACRES_1*salario);
        printf("Salario com aumento: %.2f\n",salario_atualizado);
    }
    else
    {
        salario_atualizado=salario+(ACRES_2*salario);
        printf("Salario com aumento: %.2f\n",salario_atualizado);
    }
    return 0;
}   