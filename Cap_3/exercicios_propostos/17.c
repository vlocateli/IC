/*Faça um programa que receba o raio, calcule e mostre: 
a) o comprimento de uma esfera; sabe-se que c = 2 * pi*R; 
b) a área de uma esfera; sabe-se que A = pi *R^2;
c) o volume de uma esfera; sabe-se que v = ¾ * pi R3. 
*/
#include <stdio.h>
#include<math.h>
int main (void)
{
    double raio,pi=3.1415,comp,area,volume;
    printf("Digite o valor do raio: \n");
    scanf("%lf%*c",&raio);
    comp=2.00*pi*raio;
    area=pi*pow(raio,2);
    volume=(4.00/3.00)*pi*pow(raio,3);
    printf("O comprimento eh de, aproximadamente: %.2f\n",comp);
    printf("Area = %.2f\n",area);
    printf("Volume = %.2f\n",volume);
    return 0;
}