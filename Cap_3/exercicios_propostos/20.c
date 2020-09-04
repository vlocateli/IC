//Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta. 
#include <stdio.h>
#include<math.h>
int main (void)
{
    double angulo,dist_parede,med_escada,seno,pi=3.1415;
    printf("Digite o angulo: \n");
    scanf("%lf%*c",&angulo); 
    angulo=angulo*pi/180.00;
    seno=sin(angulo);
    printf("Digite a distancia que a escada esta da parede: \n");
    scanf("%lf%*c",&dist_parede);
    med_escada=dist_parede/angulo;
    printf("A distancia da escada eh de: %.2f",med_escada);
    return 0;
}