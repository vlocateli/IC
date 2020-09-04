 /*
 19)cada degrau de uma escada tem X de altura.
  Faça um programa que receba essa altura e a altura que o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo, 
  sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem estar em metros.
 */
#include <stdio.h>
int main(void)
{
    float alt_desejada,alt_degrau,qtd_degrau;
    printf("Programa para calcular quantos degraus o usuario deve subir\n");
    printf("Digite a altura do degrau (em M)\n");
    scanf("%f%*c",&alt_degrau);
    printf("Digite a altura a ser alcancada (em M) \n");
    scanf("%f%*c",&alt_desejada);
    qtd_degrau=alt_desejada/alt_degrau;
    printf("Vc devera subir %.2f",qtd_degrau);
    return 0;
}

  
  
