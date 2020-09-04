/*
Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre: 
 a) a hora digitada convertida em minutos; 
 b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior; 
 c) o total dos minutos convertidos em segundos. 
*/
#include <stdio.h>
int main(void)
{
    int horas,minutos,horas_convert,total_min;
    printf("Conversao de horas");
    printf("Digite as horas: \n");
    scanf("%d%*c",&horas);
    printf("Digite os minutos: \n");
    scanf("%d%*c",&minutos);
    horas_convert=horas*60;
    total_min=horas_convert+minutos;
    printf("%d H em Minutos = %d\n",horas,horas_convert);
    printf("Total de minutos = %d\n",total_min);
    printf("%d min  convertidos em segundos = %d s\n",total_min,total_min*60);
    return 0;
}
