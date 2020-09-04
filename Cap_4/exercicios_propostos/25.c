/*
Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela con-
sulta à tabela que se segue, na qual:
*/
#include<stdio.h>
int main(){
  int horas_ex, horas_f;
  float H,prem;
  printf("DIGITE QTD DE HORAS EXTRAS\n");
  scanf("%d%*c",&horas_ex);
  printf("DIGITE A QTD DE HORAS Q FALTOU\n");
  scanf("%d%*c",&horas_f);

  H=horas_ex-(2.0f/3.0f * ( horas_f) ) ;
  if (H>=2400)
    printf("Premio =500\n" );

  else if (1800< H && H<2400)
    printf("Premio = 400\n");

  else if (1200<=H && H<1800)
   printf("Premio = 300\n");

  else if (600<=H && H<1200)
    printf("Premio = 200\n");

  else 
    printf("Premio = 100\n");
   
  return 0;
}
