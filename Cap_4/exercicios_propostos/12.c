/*
 Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e des-
contado o imposto de 7% sobre o salário.
*tabela na pagina 91 do livro*
//imposto de 0.07f
*/
#include<stdio.h>
int main(void){
   float sal,temp;
   printf("Digite seu salario\n");
   scanf("%f%*c",&sal);
  if(sal<=350){
    temp=sal+100;
    printf("Valor a receber = %.2f",temp-(temp*0.07f)); 
    }
   else if(sal<350 && sal<600){
    temp=sal+75;
    printf("Valor a receber = %.2f",temp-(temp*0.07f)); 
    }

   else if(sal<=600 && sal<=900){
    temp=sal+50;
    printf("Valor a receber = %.2f",temp-(temp*0.07f)); 
    }

   else{
    temp=sal+50;
    printf("Valor a receber = %.2f",temp-(temp*0.07f)); 
    }
 return 0; 
    
   
}
