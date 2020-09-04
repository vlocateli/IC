/*
20)Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no chão e encostada na parede e a altura da parede onde está a ponta da escada. 
Calcule e mostre a medida dessa escada. Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham com medidas de ângulos em radianos.
*/
#include <stdio.h>
#include<math.h>
#define PI 3.14159265359
int main(void)
{
    double altura_parede,angulo,med_escada,ang_em_rad;
    printf("Digite a altura da parede \n");
    scanf("%lf%*c",&altura_parede);
    printf("Digite o angulo (em graus)\n");
    scanf("%lf%*c",&angulo);
    ang_em_rad=PI*angulo/180.0;
    med_escada=altura_parede/sin(ang_em_rad);
    printf("A medida da escada eh de %.2f",med_escada);
    return 0;
}