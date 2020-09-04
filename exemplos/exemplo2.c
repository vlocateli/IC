#include <stdio.h>
//dividir 2 numeros inteiros
int main ()
{
    int numerador,denominador,resultado;
    printf("Digite o numerador: \n");
    scanf("%d%*c",& numerador);
    printf("Digite o denominador: \n");
    scanf("%d%*c",&denominador);
    if (denominador==0)
    {
        printf("\a");
        printf("Impossivel dividir por zero!"); 
    }
    else
    {
        resultado=numerador/denominador;
        printf("O resultado eh: %d",resultado);
    }    
    return 0;
}
