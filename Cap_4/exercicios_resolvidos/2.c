 /*
 2)Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem constante na tabela a seguir.
  Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0.

  MÉDIA ARITMÉTICA MENSAGEM 
  0,0<= MA < 3,0 Reprovado 
  3,0<= MA <  7,0 Exame 
  7,0<= MA <= 10,0 Aprovado

*/
#include <stdio.h>
int main(void)
{
    float nota1,nota2,nota3,ma;
    printf("Calculo de M.A\n");
    printf("Digite a nota 1\n");
    scanf("%f%*c",&nota1);
    printf("Digite a nota 2\n");
    scanf("%f%*c",&nota2);
    printf("Digite a nota 3\n");
    scanf("%f%*c",&nota3);
    ma=(nota1+nota2+nota3)/3;
    printf("Media = %f\n",ma);
    if (7.0<= ma && ma <= 10.0){
        printf("Situacao:Aprovado\n");
    }
    else if (3.0 <= ma && ma < 7.0){
        printf("Situacao:Exame\n");
        printf("Vc precisa tirar %f",12.0f-ma);
    }
    else{
        printf("Situacao:Reprovado\n");
    }

}
