/*
7)Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. 
*/
#define ITEM_A (15.0f/100.0f)
#define ITEM_B (20.0f/100.0f)
#include <stdio.h>
int main (void)
{
    float peso;
    printf("Digite o peso: \n");
    scanf("%f%*c",&peso);
    printf("Apos engordar 15%% do peso atual(%.2f KG): %.2f KG\n",peso,peso+peso*ITEM_A);
    printf("Apos engordar 15%% do peso atual(%.2f KG): %.2f\n",peso,peso+peso*ITEM_B);
    return 0;
}