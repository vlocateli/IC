/*
 Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de re-
frigeração).
Calcule e mostre:
*/
#include<stdio.h>
int main(){
  float preco,aumento,imposto,final;
  int cat;
  char sit;
  printf("Digite o preco\n");
  scanf("%f%*c",&preco);

  printf("Digite a categoria\n");
  scanf("%d%*c",&cat);

  printf("Digite o tipo de refrigeração\n");
  scanf("%c%*c",&sit);

  if(preco<=25 &&  cat==1)
    aumento=preco*0.05f;

  else if (preco<=25 &&  cat==2)
    aumento=preco*0.08;

  else if (preco<=25 && cat == 3)
    aumento=preco*0.10f;

  else if (preco>25 && cat==1)
    aumento=preco*0.12f;

  else if (preco>25 && cat == 2)
    aumento=preco*0.15f;

  else 
    aumento=preco*0.18f;
  printf("Aumento = %.2f\n",aumento);
  
  if (cat==2 ||  sit=='R')
    imposto=preco*0.05f;
  else
    imposto=0.08f;
  printf("Imposto = %.2f\n",imposto);
  final=preco+aumento-imposto;
  printf("Novo preco = %.2f\n",final);
if (final<=50)
  printf("Barato\n");

else if (50<=final &&  final<=120)
  printf("Normal\n");

else
  printf("Caro\n");


return 0;

}


