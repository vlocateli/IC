 /*
 11)Faça um programa que calcule e mostre a área de um losango. sabe-se que: A = (diagonal maior * diagonal menor)/2. 
 */
#include <stdio.h>
int main (void)
{
    float A,diag_maior,diag_menor;
    printf("Digite o valor da diagonal maior: \n");
    scanf("%f%*c",&diag_maior);
    printf("Digite o valor da diagonal menor: \n");
    scanf("%f%*c",&diag_menor);
    A=(diag_menor*diag_maior)/2.0;
    printf("Area = %.2f",A);
    return 0;
}