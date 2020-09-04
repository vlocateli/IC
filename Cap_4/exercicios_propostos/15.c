/* 
Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um pro-
grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.
*/

#include<stdio.h>
int main(void){
  int tipo;
  float valor;
  printf("Digite o tipo de invesitmento\n");
  scanf("%d%*c",&tipo);
  printf("Digite o valor do invesitmento\n");
  scanf("%f%*c",&valor);
  switch(tipo){
    case 1:
      printf("Poupanca\n");
      printf("Rendimento = %.2f\n",valor*0.03f);
      break;
    case 2:
      printf("Fundos de renda fixa\n");
      printf("Rendimento = %.2f",valor*0.04f);
      break;
     default:
      printf("\a a opcao nao eh valida! tente novamente...\n");
      break;
  }

  return 0;
}

