/*
Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

#include<stdio.h>
int main(void){
  int j;
  float vet[4]={0},nota,soma=0.0f,media;
  for (j=0;j<4;j++){
    printf("Digite a nota %02d\n",j+1);
    scanf("%f%*c",&nota);
    soma+=nota;
    vet[j]=nota;
  
  }
  media=soma/4.0f;
  printf("Media = %.2f\n",media);
  if ( (soma/4.0f) >= 7.0f ){
    printf("Aprovado\n");
  }

  else{
    printf("Reprovado\n");
  }

  return 0;

}
