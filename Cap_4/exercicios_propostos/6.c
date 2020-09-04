/*
 Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.
*/
#include<stdio.h>
#include<math.h>
int main(void){
  double  num1,num2,res;
  char op;
  printf("a) O primeiro número elevado ao segundo número.\n");
  printf("(b) Raiz quadrada de cada um dos números.\n");
  printf("c) Raiz cúbica de cada um dos números.\n");
  
  printf("Digite a opção desejada\n");
  scanf("%c%*c",&op);
  printf("Digite o 1ro numero\n");
  scanf("%lf%*c",&num1);
  printf("Digite o 2do numero\n");
  scanf("%lf%*c",&num2);
  switch(op){
    case 'a':
      printf("%.2f ^ %.2f = %.2f\n",num1,num2,pow(num1,num2) );
      break;
    

    case 'b':
      printf("sqrt(%.2f) = %.2f , (sqrt=%.2f) = %.2f\n",num1,sqrt(num1),num2,sqrt(num2) );
      break;
    

    case 'c':
      printf("raiz cub(%.2f) = %.2f , raiz cub (%.2f) = %.2f\n",num1,pow(num1,1.0/3.0),num2,pow(num2,1.0/3.0) );
      break;


    default:
      printf("Opção inválida!\n\a");
      break;
  }
  return 0;
  }

