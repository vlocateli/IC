//12)
/*
 Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro. 
 */
 #include<stdio.h>
 #include<math.h>
 int main(void){
     double num1,num2,quad;
     printf("Calculo de um numero X elevado a um numero Y\n");
     printf("Digite o primeiro numero : \n");
     scanf("%lf%*c",&num1);
     printf("Digite o segundo numero : \n");
     scanf("%lf%*c",&num2);
     quad=pow(num1,num2);
     printf("%.2f elevado %.2f = %.2f",num1,num2,quad);
     return 0;
 }