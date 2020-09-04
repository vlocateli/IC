/*
Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, re-
ceba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de
opção inválida e não se preocupe com restrições, como salário negativo.

Menu de opções:
1. Imposto
2. Novo salário
3. Classificação
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras
a seguir.
            SALARIO                                     PERCENTUAL IMPOSTO
        Menor que R$ 500,00                                 5%
        De R$ 500,00 (inclusive) a R$ 850,00 (inclusive)    10%
        Acima de R$ 850,00                                  15%

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário, usando as
regras a seguir.
            SALARIO                                             AUMENTO
        Maior que R$ 1.500,00                                   R$ 25,00
        De R$ 750,00 (inclusive) a R$ 1.500,00 (inclusive)      R$ 50,00
        De R$ 450,00 (inclusive) a R$ 750,00                    R$ 75,00
        Menor que R$ 450,00                                     R$ 100,00

Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir.
            SALARIO                                                classificação
            Até R$ 700,00 (inclusive)                              Mal remunerado
            Maiores que R$ 700,00                                  Bem remunerado


*/
#include <stdio.h>
int main(void)
{
    int i;
    float sal_atual,imposto,sal_novo;
    printf("Digite a opcao de 1 a 3\n");
    scanf("%d%*c",&i);
    printf("Digite seu salario\n");
    scanf("%f%*c",&sal_atual);
    switch (i)
    {
    case 1:
        printf("Imposto\n");
        if (sal_atual<500.00f)
        imposto=sal_atual*0.05f;
        else if (500.f<=sal_atual && sal_atual<=850.0f)
        imposto=sal_atual*0.10f;
        else
        imposto=sal_atual*0.15f;
        printf("Imposto a pagar: R$%.2f",imposto);
        break;
    case 2:
        printf("Calcular novo salario\n");
        if (sal_atual>1500)
        sal_novo=sal_atual+25;
        else if(750<=sal_atual && sal_atual>1500)
        sal_novo=sal_atual+50;
        else if(450<= sal_atual && sal_atual>750)
        sal_novo=sal_atual+75;
        else 
        sal_novo=sal_atual+100;
        printf("Salario atualizado: R$%.2f",sal_novo);
    case 3:
        printf("Classificacao\n");
        if (sal_atual<=700)
        printf("Mal remunerado\n");
        else
        printf("Bem remunerado\n");
        break;
        

    default:
        printf("\a");
        printf("Digite um opcao valida!\n");
        break;
    }
    return 0;
}