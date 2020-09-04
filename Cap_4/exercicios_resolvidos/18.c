/*
18)Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
e, se forem, verifique se é um triângulo equilátero, isósceles ou escaleno.
Se eles não formarem um triângulo, escreva uma mensagem. 
Considere que:
■ o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
■ chama-se equilátero o triângulo que tem três lados iguais;
■ denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
■ recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/
#include <stdio.h>
int main(void)
{
    float X,Y,Z;
    printf("Digite as 3 medidas de um triangulo \n");
    scanf("%f%f%f%*c",&X,&Y,&Z);
    // cond existencia 
    if (X>Y+Z || Y>X+Z || Z>X+Y)
    printf("A figura nao se trata de um triangulo\n");

    else if (X == Y  && Y== Z && X==Z)
    printf("Triangulo = Equilatero\n");

    else if(X==Y || Y==Z || X==Z)
    printf("Triangulo iscoceles\n");

    else 
    printf("Triangulo escaleno\n");
    
    return 0;


}