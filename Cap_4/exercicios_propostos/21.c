/*
 Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.
*/
#include<stdio.h>
int main(void){
  int cod;
  printf("Digite o cod\n");
  scanf("%d%*c",&cod);
  if (cod==1)
    printf("Sul\n");

  else if (cod==2)
    printf("Norte\n");

  else if (cod==3)
    printf("Leste\n");
 
  else if (cod==4)
    printf("Oeste\n");

  else if (cod==5 || cod==6)
    printf("Nordeste\n");
 
  else if (cod==7 || cod==8 ||cod == 9)
    printf("Sudeste\n");

  else if (10<= cod && cod <=20)
    printf("Centro-Oeste\n");

  else
    printf("Noroeste\n");
return 0;

}


  
