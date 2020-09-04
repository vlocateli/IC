/*
5)Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%
*/
#define DESCONTO (10.0f/100.0f)
#include <stdio.h> 
int main (void)
{
    float preco, novo_preco;
    printf("Digite o preco do produto: \n");
    scanf("%f%*c",&preco);
    //While opcional
    /*
    while (preco==0){
        printf("\a");
        printf("Preco invalido, digite novamente:\n");
        scanf("%f%*c",&preco);
    }
    */
    novo_preco=preco-(preco*DESCONTO);
    printf("O novo preco eh de : %.2f",novo_preco);
    return 0;
}