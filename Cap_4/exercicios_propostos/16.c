/*

Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

 */

#include<stdio.h>
int main(void){
  float preco;
  int cod;
  printf("Digite o preco\n");
  scanf("%f%*c",&preco);
  printf("Digite o codigo\n");
  scanf("%d%*c",&cod);
  if (preco<=30)
    printf("Desconto = 0 \n  preco = %.2f\n",preco);

  else if (30< preco && preco<100)
    printf("Desconto = 0.1%% \n preco = %.2f\n",preco-=(preco*0.1f) ) ;

  else
    printf("Desconto = 0.15%% \n preco = %.2f\n",preco-=(preco*0.15f) ) ;

  return 0;
}



