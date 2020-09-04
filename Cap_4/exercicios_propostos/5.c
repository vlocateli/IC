/*
 Faça um programa que receba duas numeros,itmética e a execute as operações listadas a seguir,
que se encontra na tabela a seguir:
     EsCoLhA do usuário oPErAção
1 Média entre os números digitados
2-Diferença do maior pelo menor
3-Produto entre os números digitados
4-Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
*/
#include<stdio.h>
#include<stdbool.h>
int main(void){
  int escolha;
  float nota=0,vetor[2]={0},media=0,op=0.0f,maior=0,menor=0;
  int j;
  for(j=0;j<2;j++){
  printf("Digite a nota %02d\n",j+1);
  scanf("%f%*c",&nota);
  while (nota==0){
    printf("Nota invalida!! Digite uma nota diferente de zero!\a\n");
    printf("Digite a nota %02d\n",j+1);
    scanf("%f%*c",&nota);
  }

  vetor[j]=nota;
  op+=nota;

  }
  printf("1-Media entre os numeros digitados\n"
          "2-Diferença do maior pelo menor\n"
          "3-Produto entre os números digitados\n"
          "4-Divisão do primeiro pelo segundo\n"
        );
  printf("Digite sua escolha \n");
  scanf("%d%*c",&escolha);
  while(escolha<1 ||   escolha>4){
    printf("\a Erro! Entrada incorreta");
    return 0;
  }
  switch(escolha){
    case 1:
      j=0;
      op=vetor[j]+vetor[j+1];
      printf("Media = %.2f",op/2.0f);   
      break; 

     case 2:
         for (j=0;j<2;j++){
             if( vetor[j]>vetor[j+1]){
                 maior=vetor[j];
                 menor=vetor[j+1];
             }
         }
        op=maior-menor;
        printf("%.2f",op);
        break;
   
      case 3:
        j=0;
        op=vetor[j]*vetor[j+1];
         printf("%.2f * %.2f = %.2f",vetor[j],vetor[j+1],op);
         break;
     case 4:
         j=0;
         op=vetor[j]/vetor[j+1];
         printf("%.2f",op);
        break;
    default:
       printf("\a Operacao invalida!");
       break;
    }

return 0;


}




