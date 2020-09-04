/*
 Faça um programa que receba:
■ ■ o código do produto comprado; e
■ ■ a quantidade comprada do produto.
Calcule e mostre:
■ ■ o preço unitário do produto comprado, seguindo a Tabela I;
■ ■ o preço total da nota;
■ ■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■ ■ o preço final da nota depois do desconto.
*/
#include<stdio.h>
int main(){

  int id,qtd;
  float preco_un,preco_total,desconto;
  printf("Digite o codigo do produto\n");
  scanf("%d%*c",&id);
  printf("Digite a quantidade\n");
  scanf("%d%*c",&qtd);
  if (1<= id && id <= 20) 
    preco_un=10.0f;

  else if (11 <= id && id <= 20)
    preco_un=15.0f;

  else if (21 <= id &&  id <= 30)
    preco_un=20.0f;

  else 
    preco_un=30.0f;
  
  printf("Preco unitario = %.2f\n",preco_un);
  preco_total=qtd*preco_un;
  printf("Preco total = %.2f\n",preco_total);

  if (preco_total<=250)
    desconto=preco_total*0.05f;

  else if (250< preco_total && preco_total<500)
   desconto=preco_total*0.10f;


  else
    desconto=preco_total*0.15f;
 
  printf("Desconto = %.2f\n",desconto);

  printf("Preco final = %.2f",preco_total-desconto);

return 0;
}
