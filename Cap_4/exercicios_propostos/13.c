/*
 Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a se-
guir, o novo preço e a classificação.
*tabela na pagina 91 do livro*

*/
#include<stdio.h>
int main(void){

   float preco;
   printf("Digite o preco\n");
   scanf("%f%*c",&preco);
   if(preco<=50)
     printf("Novo preco = %.2f\n",preco+=(preco*0.05) );

   else if (50 <= preco && preco<=100)
     printf("Novo preco = %.2f\n",preco+=(preco*0.10) );

   else
     printf("Novo preco = %.2f\n",preco+=(preco*0.15) );
     
  if (preco<=80)
    printf("Barato\n");

  else if (80< preco && preco <= 120)
    printf("Normal\n");

  else if (120< preco && preco <= 200)
    printf("Normal\n");
  else 
    printf("Mutio caro\n");
  return 0;



}

