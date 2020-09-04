/*
 O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distri-
buidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
*tabela pag 91*
*/
#include<stdio.h>
int main(void){
  float cf;
  printf("Digite o custo de fabrica\n");
  scanf("%f%*c",&cf);
  if(cf<=12.000)
    printf("Preco final = %.2f",cf+cf*0.05f);
  
  else if (300< cf &&  cf < 600)
    printf("Preco final = %.2f",cf+cf*0.10f+cf*0.15f);
  
  else
    printf("Preco final = %.2f",cf+cf*0.15f+cf*0.20f);
return 0;    
}

   
     

