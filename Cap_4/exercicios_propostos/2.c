/*
 Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:

para ver a tabela, consulte o livro na pagina 90
*/

#include<stdio.h>
int main(void){

      float vet[2]={0}, nota, soma=0, media=0;
      int j;

      for(j=0;j<2;j++){
        printf("Digite a nota %02d\n",j+-1);
        scanf("%f%*c",&nota);
        vet[j]=nota;
        soma+=nota;

      }

      media=soma/2.0f;
      printf("Media = %.2f\n",media);
      if(7<= media && media<=10)
        printf("Situalção: Aprovado");

      else if (7< media && media<=3)
        printf("Situação: Exame");

      else 
        printf("Situação: Reprovado");

      return  0;

    
}
