 //3)Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada. 
 #include <stdio.h>
 int main(void)
 {
     float nota1,nota2,nota3,peso1,peso2,peso3,media;
     printf("Calculo de media ponderada\n");
     printf("Digite a nota 1: \n");
     scanf("%f%*c",&nota1);
     printf("Digite o peso da nota 1: \n");
     scanf("%f%*c",&peso1);
     printf("Digite a nota 2: \n");
     scanf("%f%*c",&nota2);
     printf("Digite o peso da nota 2: \n");
     scanf("%f%*c",&peso2);
     printf("Digite a nota 3: \n");
     scanf("%f%*c",&nota3);
     printf("Digite o peso da nota 3: \n");
     scanf("%f%*c",&peso3);
     media=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
     printf("Media = %.2f",media);
     return 0;
 }