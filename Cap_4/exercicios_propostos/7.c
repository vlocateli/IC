/*
 Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.
*/
#include<stdio.h>
int main(void){

  float sal;
  printf("Digite seu salario\n");
  scanf("%f%*c",&sal);
  if(sal<500){
    sal+=(sal*0.3f);
    printf("Sal = %.2f",sal);
  }
  else
    printf("Vc n tem direito a salario\n");
  return 0;
}
