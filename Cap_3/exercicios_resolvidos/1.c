 //1)Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números. 
 #include <stdio.h>
 
 int main(void)
 {
     int soma,num1,num2,num3,num4;
     printf("Digite o primeiro numero: \n");
     scanf("%f%*c",&num1);
     printf("Digite o segundo numero: \n");
     scanf("%f%*c",&num2);
     printf("Digite o terceiro numero: \n");
     scanf("%f%*c",&num3);
     printf("Digite o quarto numero: \n");
     scanf("%f%*c",&num4);
     soma=num1+num2+num3+num4;
     printf("A soma eh %f",soma);
     return 0;
 }