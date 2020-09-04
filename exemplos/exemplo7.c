/*
ceil  |ceil(X) Arredonda um número real para cima. Por exemplo, ceil(3.2) é 4. 
cos   |cos(X) calcula o cosseno de X (X deve estar representado em radianos). 
exp   |exp(X) Obtém o logaritmo natural e elevado à potência X. 
abs   |abs(X) Obtém o valor absoluto de X. 
floor |floor(X) Arredonda um número real para baixo. Por exemplo, floor(3.2) é 3. 
log   |log(X) Obtém o logaritmo natural de X. log10 log10(X) Obtém o logaritmo de base 10 de X. 
modf  |z = modf(X,&Y) Decompõe o número real armazenado em X em duas partes: Y recebe a parte fracionária e z, a parte inteira do número. 
pow   |pow(X,Y) calcula a potência de X elevado a Y. 
sin   |sin(X) calcula o seno de X (X deve estar representado em radianos). 
sqrt  |sqrt(X) calcula a raiz quadrada de X. 
tan   |tan(X) calcula a tangente de X (X deve estar representado em radianos).
Faça um programa que utiliza todas as funções do cabeçalho <math.h>,ao menos 2 exemplos de cada.
*/
#define VALOR_PI (3.1415) 
#include <stdio.h>
#include <math.h>
int main()
{   
    double graus,seno=sin((VALOR_PI*graus)/180.0);
    /*
    printf("%f\n",z);

    
    for (double i=1.0;i<10.0;i++)
    {
    for (double j =0;j<5;j++)
    {
      printf("%.0f ^ %.0f = %.2f\n",i,j,pow(i,j));
    }
    }
    */
    printf("Digite o valor do seno (em graus)\n");
    scanf("%lf%*c", & graus);
    printf("%.2f\n",sin((VALOR_PI*graus)/180.0));
    return 0;
}