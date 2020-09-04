/*
9)Faça um programa que calcule e mostre a área de um trapézio. sabe-se que: A = ((base maior + base menor) * altura)/2 
*/
#include <stdio.h>
int main (void)
{
    int A,base_maior,base_menor,altura;
    printf("Digite a base maior\n");
    scanf("%d%*c",&base_maior);
    printf("Digite a base menor: \n");
    scanf("%d%*c",&base_menor);
    printf("Digite a altura (H): \n");
    scanf("%d%*c",&altura);
    A=((base_maior+base_menor)*altura)/2;
    printf("A area eh de %d",A);
    return 0;
}
