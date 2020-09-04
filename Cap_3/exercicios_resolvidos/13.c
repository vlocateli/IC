/*
Sabe-se que: pé = 12 polegadas 1 jarda = 3 pés 1 milha = 1,760 jarda 
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados. 
a) polegadas; 
b) jardas; 
c) milhas. 
*/
#include<stdio.h>
int main(void){
    float medida,polegada,jarda,milha;
    printf("Conversao de medidas: de pes para polegadas,jardas,milhas\n");
    printf("Digite o valor em pes:\n");
    scanf("%f%*c",&medida);
    polegada=medida*12.0f;
    jarda=medida/3.0f;
    milha=jarda/1760.f;
    printf("----------------------------------\n");
    printf("%.2f pes  em polegadas = %.2f\n",medida,polegada);
    printf("%.2f pes em jardas = %.2f\n",medida,jarda);
    printf("%.2f pes em milhas = %.2f\n",medida,milha);
    printf("----------------------------------\n");
    return 0;
}