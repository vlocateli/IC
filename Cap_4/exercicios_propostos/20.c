/*
Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.
*/
#include<stdio.h>
int main(void){
  int idade;
  printf("Digite sua idade\n");
  scanf("%d%*c",&idade);
  if (idade<5)
    printf("Idade invalida, por favor rode o programa novamente \n ");

  else if (5<= idade && idade <=7)
    printf("Infantil\n");
  
  else if (8<= idade && idade <=10)
    printf("Juvenil\n");
  else if (8<= idade && idade <=10)
    printf("Adolescente\n");
  else if (16<= idade && idade <=36)
    printf("Adulto\n");
  else
    printf("Senior\n");

  return 0;
}


