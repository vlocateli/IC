/*
Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, veri-
fique e mostre a classificação dessa pessoa.
                                    
                                    
                                                    PESO


ALTURA                         ATÉ 60               ENTRE 60 E 90 (INCLUSIVE)                       ACIMA DE 90
Menores que 1,20                 A                              D                                         G
De 1,20 a 1,70                   B                              E                                         H
Maiores que 1,70                 C                              F                                         I

*/
#include <stdio.h>
int main(void)
{
    float peso,altura;
    printf("Digite seu peso (em KG/G) \n");
    scanf("%f%*c",&peso);
    printf("Digite sua altura (em M)\n");
    scanf("%f%*c",&altura);
    if (altura<1.20f && peso<=60.0f)
    printf("Classificacao: A\n");
    else if((1.20f<= altura && altura<=1.70f)&& peso<=60.0f)
    printf("Classificacao: B \n");
    else if(altura>1.70f && peso<=60.0f)
    printf("Classificacao: C\n");
    else if (altura<1.20f && (60<peso && peso<=90.0f))
    printf("Classificacao: D\n");
    else if((1.20f<= altura && altura<=1.70f) && 60.0f<peso && peso<=90.0f)
    printf("Classificacao: E\n");
    else if((altura>1.70f) && 60.0f<peso && peso<=90.0f)
    printf("Classificacao: F\n");
    else if (altura<1.20f && peso>90.0f)
    printf("Classificacao: G\n");
    else if((1.20f <= altura && altura <=1.70f) && peso>90.0f)
    printf("Classificacao: H\n");
    else
    printf("Clasfficacao: I\n");
    
    return 0;





}