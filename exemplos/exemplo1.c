#include <stdio.h>
//Multiplicar 2 números
int main ()
{
    int var1,var2,resultado; //variaveis 1 e 2
    printf("Digite o primeiro  numero a ser multiplicado: \n");
    scanf("%d%*c",&var1);
    printf("Digite o segundo numero: \n");
    scanf("%d%*c",&var2);
    resultado=var1*var2;
    printf("%d",resultado);
}
