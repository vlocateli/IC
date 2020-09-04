/*
 Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
*tabela na pagina 91 do livro*
*/
#include<stdio.h>
int main(void){
  float sal;
   printf("Digite seu salario\n");
   scanf("%f%*c",&sal);
   if (sal<=300)
     printf("Novo sal = %.2f",sal+=(sal*0.5f));

   else if(300<sal && sal<=500)
     printf("Novo sal = %.2f",sal+=(sal*0.4f));
    
   else if(500<sal && sal<=700)
     printf("Novo sal = %.2f",sal+=(sal*0.3f));
 
   else if(700<sal && sal<=800)
     printf("Novo sal = %.2f",sal+=(sal*0.2f));
 
   else if(800<sal && sal<=1000)
     printf("Novo sal = %.2f",sal+=(sal*0.1f));
   else 
     printf("Novo sal = %.2f",sal+=(sal*0.05f));
  return 0;
  }


