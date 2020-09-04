/*
1) Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo. 
*/
#include <stdio.h>
int main ()
{
    int num_1,num_2,res;
    printf("Digite o primeiro numero: \n");
    scanf("%d%*c",& num_1);
    printf("Digite o segundo numero: \n");
    scanf("%d%*c",&num_2);
    res=num_1-num_2;
    printf("O resultado eh: %d\n",res);
    return 0;
}