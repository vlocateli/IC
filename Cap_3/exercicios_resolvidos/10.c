//9)Faça um programa que calcule e mostre a área de um círculo. sabe-se que: Área = pi * R^2. 
#include <stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846 // podemos conseguir o valor de pi com a função acos(-1)
int main(void){
    double area,raio;
    printf("Calculo da area de um circulo: \n");
    printf("Digite o valor do raio: \n");
    scanf("%lf%*c",&raio);
    area=M_PI*pow(raio,2);
    printf("Area = %.2f apoximadamente",area);
    return 0;
}