/*
 Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
 */
#include<stdio.h>
int main(void){
  int idade;
  printf("Digite sua idade\n");
  scanf("%d%*c",&idade);
  if (idade<18)
    printf("N eh de maior\n");
  else
    printf("Eh de maior\n");
  return 0;
}


