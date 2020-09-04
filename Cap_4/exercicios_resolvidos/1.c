/*
1)A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. 
A média das três notas mencionadas obedece aos pesos a seguir:

Nota                    / Peso 
----------------------------------
Trabalho de laboratório    2     
Avaliação semestral        3           
Exame final                5     
----------------------------------
Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela:

média ponderada   | conceito
8.0 <= m.p. <= 10 |     A
7.0<= m.p. < 8.0  |     B   
6.0<= m.p. < 7.0  |     C
5.0<= m.p. < 6.0  |     D
0.0<= m.p. < 5.0  |     E

*/                               
#include <stdio.h>
int main(void)
{   
    float mp, nota1,nota2,nota3;
    printf("Calculo de media ponderada\n");
    printf("Digite a nota de lab\n");
    scanf("%f%*c",&nota1);
    printf("Digite a nota de avaliacao semestral\n");
    scanf("%f%*c",&nota2);
    printf("Digite a nota de avaliacao final\n");
    scanf("%f%*c",&nota3);
    mp=(nota1*2.0f+nota2*3.0f+nota3*5.0f)/10.0f;
    if (8.0<=mp&&mp<=10)
    {
        printf("Conceito A\n");
        printf("Media = %f\n",mp);
    }
    else if (7.0<= mp && mp< 8.0)
    {
        printf("Conceito B\n");
        printf("Media = %f\n",mp);
    }
    else if (6.0<= mp && mp <7.0)
    {
        printf("Conceito B\n");
        printf("Media = %f\n",mp);
    }

    else if (5.0 <= mp && mp < 6.0 )
    {
        printf("Conceito C\n");
        printf("Media = %f",mp);
    }

    else 
    {
        printf("Conceito D\n");
        printf("Media = %f\n",mp);
    }
    
    getchar();
    return 0;
}

