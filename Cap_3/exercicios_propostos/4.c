/*
4)Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda. 
*/
#include <stdio.h>
int main (void)
{
    float nota1,nota2,media;
    printf("Digite a nota 1: \n");
    scanf("%f%*c",&nota1);
    printf("Digite a nota 2: \n");
    scanf("%f%*c",&nota2);
    media=(nota1*2+nota2*3)/5;
    printf("A media eh %.2f",media);
    return 0;
}