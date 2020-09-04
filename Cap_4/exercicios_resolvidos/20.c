/*
20)Faça um programa que receba:

■ O código de um produto comprado, supondo que a digitação do código do produto seja sempre
válida, isto é, um número inteiro entre 1 e 10.

■ O peso do produto em quilos.

■ O código do país de origem, supondo que a digitação do código seja sempre válida, isto é, um nú-
mero inteiro entre 1 e 3.

Tabelas:
Código do País de origem                    Imposto  |      Código do                                   Preço por grama        |
                                                     |       Produto                                                           |
            1                                  0%    |        1 a 4                                         10                 |
            2                                  15%   |        5 a 7                                         25                 |
            3                                  25%   |        8 a 10                                        35                 |
----------------------------------------------------- -------------------------------------------------------------------------

Calcule e mostre:
 ■ o peso do produto convertido em gramas;
 ■ o preço total do produto comprado;
 ■ o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende
do país de origem;
 ■ o valor total, preço total do produto mais imposto.
*/
#include <stdio.h>
int main(void)
{
    int codigo_produto,codigo_pais;
    float peso,imposto,valor_imposto,total,valor_final;
    printf("Digite o codigo do produto\n");
    scanf("%d%*c",&codigo_produto);
    printf("Digite o peso do produto\n");
    scanf("%f%*c",&peso);
    printf("Digite o codigo do pais de origem\n");
    scanf("%d%*c",&codigo_pais);
    peso=peso*1000;
    switch (codigo_pais)
    {
    case 1:
        imposto=0;
        break;
    case 2:
        imposto=0.15f;
        break;
    case 3:
        imposto=0.25f;
        break;
    default:
        printf("Por favor digite um codigo valido\n \a");
        break;
    }
    if (1<= codigo_produto && codigo_produto<=4)
    total=10*peso;
    else if(5<= codigo_produto && codigo_produto<=7)
    total=25*peso;
    else if(8<= codigo_produto && codigo_produto<=10)
    total=35*peso;
    else
    printf("Codigo invalido!\n");
    valor_imposto=(total*imposto);
    valor_final=total+(total*imposto);
    //saida
    printf("Peso em gramas: %.2f g \n",peso);
    printf("Preco total: R$ %.2f\n",total);
    printf("Valor do imposto: R$ %.2f\n",valor_imposto);
    printf("Valor final: R$ %.2f",valor_final);
}
