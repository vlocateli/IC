/*
Faça um programa que calcule e mostre a área de um quadrado. sabe-se que: A = lado * lado. 
*/
#include <stdio.h>
int main (void)
{
    int lado,A;
    printf("Digite o valor do lado: \n");
    scanf("%d%*c",&lado);
    A=lado*lado;
    printf("O valor da area eh de: %d\n",A);
    return 0;
}