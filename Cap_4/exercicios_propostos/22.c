/*
 Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.
*/
#include<stdio.h>
int main(void){
  int idade;
  float peso;
  printf("Digite sua idade\n");
  scanf("%d%*C",&idade);
  printf("Digite seu peso\n");
  scanf("%f%*C",&peso);
  if ( (idade<20) &&  peso<=60  )
    printf("Grupo = 9\n");
  
  else if( (idade<20) && ( 60<peso && peso<=90  ))
    printf("Grupo = 8\n");

  else if (idade<20 && (peso>90) )
    printf("Grupo = 7\n");
  
  else if ( (20<= idade && idade<=50 ) && peso<=60 )
    printf("Grupo = 6\n");

  else if ( (20<= idade && idade<=50 ) && (60<peso && peso<=90) )
    printf("Grupo = 5\n");

  else if ( (20<= idade && idade<=50 ) && peso>90 )
    printf("Grupo = 4\n");
 
  else if ( (idade>50) &&  peso<=60  )
    printf("Grupo = 3\n");

  else if ( (idade>50 ) && (60 <peso &&  peso<=90) )
    printf("Grupo = 2\n");

  else if ( ( idade>50 ) && peso>90 )
    printf("Grupo = 1\n");
  
  return 0;
}



