/*
 Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.

*tabela pag 91*
*/
#include<stdio.h>
int main(void){
   float sal;
   printf("Digite seu salario\n");
   scanf("%f%*c",&sal);
  if (sal<=300)
    printf("Aumento = %.2f \n Novo sal = %.2f \n",sal*0.15f,sal+(sal*0.15f) );
 
  else if (300 < sal &&  sal < 600)
    printf("Aumento = %.2f \n Novo sal = %.2f \n",sal*0.10f,sal+(sal*0.10f) );
  else if(600<= sal &&  sal<=900)
    printf("Aumento = %.2f \n Novo sal = %.2f \n",sal*0.05f,sal+(sal*0.05f) );
  else 
    printf("Aumento = 0  \n Novo sal = %.2f \n",sal);
  return 0;

  }

    
