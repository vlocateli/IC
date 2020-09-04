/*
 Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
*tabela na pagina 91 do livro*
*/
#include<stdio.h>
int main(void){
  float sal;
   printf("Digite seu salario\n");
   scanf("%f%*c",&sal);
  if (sal<=300)
   sal+=(sal*0.35f);
  else
   sal+=(sal*0.15f);
  printf("Sal = %.2f",sal);
 return 0; 
}

