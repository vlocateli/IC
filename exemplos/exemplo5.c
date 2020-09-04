#include <stdio.h>
/*
1. Obter o valor da altura do retângulo. 
2. Obter o valor da largura do retângulo.
3. Calcular a área. 
4. Calcular o perímetro. 
5. Mostrar os cálculos realizados.
*/
int main ()
{
    int altura,largura;
    printf("Digite o valor de altura do retangulo: \n");
    scanf("%d%*c",&altura);
    printf("Digite a largura do retangulo: \n");
    scanf("%d",&largura);
    int area=altura*largura;
    printf("Area = %d\n",area);
    int perimetro =2*(altura+largura);
    printf("Perimetro = %d\n",perimetro);
    return 0;
}