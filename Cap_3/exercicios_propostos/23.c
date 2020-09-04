//Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. sabe-se que a soma dos ângulos de um triângulo é 180 graus. 
#include <stdio.h>
int main(void)
{
    float angulo1,angulo2,angulo3;
    printf("Digite o valor do angulo 1: \n");
    scanf("%f%*c",&angulo1);
    printf("Digite o valor do angulo 2: \n");
    scanf("%f%*c",&angulo2);
    angulo3=180-(angulo1+angulo2);
    printf("%.2f %.2f\n",angulo1,angulo2);
    printf("Terceiro angulo = %.2f",angulo3);
    return 0;
}