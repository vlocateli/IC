//Faça um programa que receba uma temperatura em celsius, calcule e mostre essa temperatura em Fahrenheit. sabe-se que ( T.°C × 9/5) + 32 =  T.°F
#include <stdio.h>
int main(void)
{
    float temp_c,temp_f;
    printf("Digite a temperatura em celsius: \n");
    scanf("%f%*c",&temp_c);
    temp_f=(temp_c*9.f/5.f)+32.f;
    printf("A temperatura em graus fahrenheit eh de %.2f F",temp_f);
    return 0;
}