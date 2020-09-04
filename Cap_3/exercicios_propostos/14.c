/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
a) a idade dessa pessoa em anos; 
b) a idade dessa pessoa em meses; 
c) a idade dessa pessoa em dias; 
d) a idade dessa pessoa em semanas. 
*/
#include <stdio.h>
int main(void)
{
    int nascimento,atual,idade;
    printf("Digite o ano atual: \n");
    scanf("%d%*c",&atual);
    printf("Digite o ano do seu nasciemnto: \n");
    scanf("%d%*c",&nascimento);
    idade=atual-nascimento;
    printf("Os calculos a seguir sao aproximados & sem parte fracionaria.\n");
    printf("Idade(em anos): %d\n",idade);
    printf("Idade (em meses): %d\n",idade*12);
    printf("Idade (em dias): %d\n",idade*365);
    printf("Idade (em semanas) %d",idade*52);
    return 0;
}