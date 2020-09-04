/*
14)Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário,
acrescido de bonificação e de auxílio escola.
SALÁRIO                         BONIFICAÇÃO SALÁRIO             AUXILIO ESCOLA
Até R$ 500,00                       5% do salário               Até R$ 600,00 R$ 150,00
Entre R$ 500,00 e R$ 1.200,00       12% do salário              Acima de R$ 600,00 R$ 100,00
Acima de R$ 1.200,00                Sem bonificação


*/
#include <stdio.h>
int main(void)
{   float sal,aux;
    printf("Digite seu salario\n");
    scanf("%f%*c",&sal);
    if (sal<=600)
    aux=150;
    else 
    aux=100;
    if (sal<=500)
    {
        sal=sal+(sal*0.05)+aux;
    }
    else if (500 <= sal && sal <= 1200)
    {
        sal=sal+(sal*0.12)+aux;
    }
    else
    sal=sal+aux;
    printf("Novo sal R$%.2f",sal);
    return 0;
}