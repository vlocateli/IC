/*
8)Faça um programa que receba o peso de uma pessoa em quilos, 
calcule e mostre esse peso em gramas. 
*/
#include <stdio.h>
int main(void)
{
    float peso;
    printf("Digite seu peso(em KG):\n");
    scanf("%f%*c",&peso);
    printf("Seu peso em gramas eh de %.2f g",peso*1000.0f);
    return 0;
}