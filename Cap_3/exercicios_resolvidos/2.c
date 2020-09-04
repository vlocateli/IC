//Faça um programa que receba três notas, calcule e mostre a média aritmética
#include <stdio.h>
int main(void)
{
    float nota1,nota2,nota3,media;
    printf("Calculo de media aritimetica de 3 notas\n");
    printf("Digite a Nota 1:\n");
    scanf("%f%*c",&nota1);
    printf("Digitie a Nota 2:\n");
    scanf("%f%*c",&nota2);
    printf("Digite a Nota 3:\n");
    scanf("%f%*c",&nota3);
    media=(nota1+nota2+nota3)/3;
    printf("Media = %.2f\n",media); 
    return 0;
}