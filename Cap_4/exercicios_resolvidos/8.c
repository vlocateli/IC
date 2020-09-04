/*
9) Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação. 
Menu de opções: 1. Somar dois números. 2. Raiz quadrada de um número.
 Digite a opção desejada: 
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i;
    float num1,num2,soma,raiz,radicando;
    printf("Menu de opcoes: 1. Somar dois numeros. 2. Raiz quadrada de um numero.\n");
    printf("Digite a opcao desejada\n");
    scanf("%d%*c",&i);
    switch (i)
    {
    case 1:
        printf("Digite  2 numeros\n");
        scanf("%f%f%*c",&num1,&num2);
        soma=num1+num2;
        printf("A soma de %.2f + %.2f eh = %2f",num1,num2,soma);
        break;
    case 2:
        printf("Raiz quadrada de um numero\n");
        printf("Digite um numero\n");
        scanf("%f%*c",&radicando);
        raiz=sqrt(radicando);
        printf("Raiz de %.2f = %.2f",radicando,raiz);
        break;
    
    default:
        printf("Nao foi escolhido um numero de 1 a 2 \a");
        break;
    }
    return 0;
}