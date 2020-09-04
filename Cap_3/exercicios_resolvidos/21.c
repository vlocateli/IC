/*
21)Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a que distância a escada deve estar da parede. 
A pessoa deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro. 
Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar.

|\
| \ 
|__\

*/
#include <stdio.h>
#include <math.h>

int main (void)
{
  double taman_esc,alt_quadro,dist_parede;
  printf("Calculo distancia da parede\n");
  printf("Digite o tamanho da escada\n");
  scanf("%lf%*c",&taman_esc);
  printf("Digite a altura do quadro\n");
  scanf("%lf%*c",&alt_quadro);
  dist_parede=sqrt(pow(taman_esc,2)-pow(alt_quadro,2));
  //dist_parede=pow(pow(taman_esc,2) - pow (alt_quadro,2),0.5);
  printf("Distancia da parede = %.2f",dist_parede);
  return 0; 
}