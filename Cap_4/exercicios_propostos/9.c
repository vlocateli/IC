/*
 Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.
*tabela na pagina 91 do livro*
*/
#include<stdio.h>
int main(void){
  float sal_med;
  printf("Digite seu salario medio\n");
  scanf("%f%*c",&sal_med);
  if(sal_med>400)
    printf("Credito = %.2f", sal_med*0.3f);
  else if(400<= sal_med && sal_med <300)
    printf("Credito = %.2f",sal_med*0.25f);
  else if(300<= sal_med && sal_med <200)
    printf("Credito = %.2f",sal_med*0.20f);
  else
    printf("Credito = %.2f",sal_med*0.10f);

}



