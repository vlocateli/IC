/*
 Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizan-
do as seguintes fórmulas (onde h é a altura):
■ ■ para homens: (72.7 * h) – 58.
■ ■ para mulheres: (62.1 * h) – 44.7.
*/
#include<stdio.h>
int main(void){
  float altura;
  char sex;
  printf("Digite sua altura\n");// em M
  scanf("%f%*c",&altura);
  printf("Digite seu sexo (M  ou F)\n");
  scanf("%c%*c",&sex);
  switch(sex){
    case 'M':
      printf("Peso ideal =  %.2f",(72.7*altura) - 58 );
      break;
    
   case 'F':
      printf("Peso ideal  = %.2f",(62.1*altura) - 44.7);
      break;

   default:
      printf("\aDigite um sexo valido\n");
      break;
  }
  return 0;
 }


