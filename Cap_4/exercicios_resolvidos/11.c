/*
Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta por duas variáveis inteiras: hora e minuto). 
calcule e mostre a duração do jogo (horas e minutos), sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e terminar no dia seguinte. 
*/
#include <stdio.h>
int main(void)
{
    int h1,m1,h2,m2,d_h,d_m;
    printf("Digite que as horas que comecou\n");
    scanf("%d%*c",&h1);
    printf("Digite que os minutos \n");
    scanf("%d%*c",&m1);
    printf("Digite que as horas que acabou\n");
    scanf("%d%*c",&h2);
    printf("Digite que os minutos \n");
    scanf("%d%*c",&m2);
    if (m1>m2) //para minutos nao darem negativo
    {
        m2=m2+60;
        h2=h2-1;
    }
    if (h1>h2)
    h2=h2+24;
    d_h=h2-h1;
    d_m=m2-m1;
    printf("O jogo durou %02dh && %02d min",d_h,d_m);
    return 0;
}