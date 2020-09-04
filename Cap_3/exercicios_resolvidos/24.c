 /*
 Faça um programa que receba uma hora formada por hora e minutos (um número real), 
 calcule e mostre a hora digitada apenas em minutos.
 lembre-se de que: para quatro e meia, deve-se digitar 4.30; os minutos vão de 0 a 59. 
 */
#include<stdio.h>
int main(void)
{
    float tempo,horas,min_convert,min;
    printf("Calculo de horas & minutos em minutos\n");
    printf("Digite o valor das horas\n");
    scanf("%f%*c",&tempo);
    horas=((int)tempo);
    min=(tempo-horas);
    min*=100.0f;
    min_convert=horas*60;
    printf("O tempo em min eh de %.2f",min+min_convert);
    return 0;

}